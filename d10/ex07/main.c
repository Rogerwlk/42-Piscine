#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_sort_wordtab(char **tab);
void	ft_print_words_tables(char **);
char	**ft_split_whitespaces(char *);

int main()
{
	char *str="a aa ab az ac a1 b ";
	char **split=ft_split_whitespaces(str);

	ft_sort_wordtab(split);
	ft_print_words_tables(split);
	return 0;
}
