/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_insert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 16:24:41 by rwang             #+#    #+#             */
/*   Updated: 2017/07/14 23:27:06 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree_rb.h"

void		rotate(t_rb_node *p, int direction)
{
	if (direction == 0)
	{
		p->right = p->left->left;
		if (p->left->left)
			p->left->left->parent = p->right;
		p->left->parent = p->parent;
		p->parent->left = p->left;
		p->left->left = p;
		p->parent = p->left;
		p->left = p->left->left;
	}
	else
	{
		p->left = p->right->right;
		if (p->right->right)
			p->right->right->parent = p->left;
		p->right->parent = p->parent;
		p->parent->right = p->right;
		p->right->right = p;
		p->parent = p->right;
		p->right = p->right->right;
	}
}

t_rb_node	*create_new_node(t_rb_node *parent, void *data,
		enum e_rb_color color)
{
	t_rb_node	*node;

	node = (t_rb_node *)malloc(sizeof(t_rb_node));
	node->parent = parent;
	node->left = 0;
	node->right = 0;
	node->data = data;
	node->color = color;
	return (node);
}

void		correction(t_rb_node *n)
{
	t_rb_node	*u;
	t_rb_node	*g;

	while (n->parent && n->parent->color != RB_BLACK)
	{
		g = (n && n->parent) ? n->parent->parent : 0;
		if (!g)
			u = 0;
		else
			u = (g->left == n) ? g->right : g->left;
		if (u && u->color == RB_RED)
		{
			n->parent->color = RB_BLACK;
			u->color = RB_BLACK;
			g->color = RB_RED;
			n = g;
		}
		else
			special_case(n, g);
	}
	if (n->parent == 0)
		n->color = RB_BLACK;
}

void		special_case(t_rb_node *n, t_rb_node *g)
{
	if (n == n->parent->right && n->parent == g->left)
		rotate(n->parent, 0);
	else if (n == n->parent->left && n->parent == g->right)
		rotate(n->parent, 1);
	n->parent->color = RB_BLACK;
	g->color = RB_RED;
	if (n == n->parent->left)
		rotate(n->parent, 1);
	else
		rotate(n->parent, 0);
}

void		rb_insert(struct s_rb_node **root, void *data,
		int (*cmpf)(void *, void *))
{
	if (*root == 0)
		*root = create_new_node(0, data, RB_BLACK);
	else if (cmpf(data, (*root)->data) < 0)
	{
		if ((*root)->left)
			rb_insert(&((*root)->left), data, cmpf);
		else
		{
			(*root)->left = create_new_node(*root, data, RB_RED);
			correction((*root)->left);
		}
	}
	else
	{
		if ((*root)->right)
			rb_insert(&((*root)->right), data, cmpf);
		else
		{
			(*root)->right = create_new_node(*root, data, RB_RED);
			correction((*root)->right);
		}
	}
}
