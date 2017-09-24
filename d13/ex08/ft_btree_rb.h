/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_rb.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 16:20:32 by rwang             #+#    #+#             */
/*   Updated: 2017/07/14 23:02:41 by rwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_RB_H
# define FT_BTREE_RB_H

# include <stdlib.h>

enum			e_rb_color
{
	RB_BLACK,
	RB_RED
};

typedef struct	s_rb_node
{
	struct s_rb_node	*parent;
	struct s_rb_node	*left;
	struct s_rb_node	*right;
	void				*data;
	enum e_rb_color		color;
}				t_rb_node;

t_rb_node		*create_new_node(t_rb_node *parent, void *data,
		enum e_rb_color color);
void			rotate(t_rb_node *p, int direction);
void			correction(t_rb_node *n);
void			special_case(t_rb_node *n, t_rb_node *g);

#endif
