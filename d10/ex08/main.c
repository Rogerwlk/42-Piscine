#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2);
void	ft_advanced_sort_wordtab(char **, int(*cmp)(char *, char *));
void	ft_print_words_tables(char **);
char	**ft_split_whitespaces(char *);

int main()
{
	char *str="a aa ab az ac a1 b ";
	char **split=ft_split_whitespaces(str);

	ft_advanced_sort_wordtab(split, &ft_strcmp);
	ft_print_words_tables(split);
	return 0;
}
