#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_words_tables(char **);
char **ft_split_whitespaces(char *);

int main()
{
	char *str="\t00 000 0000 0\t\n";
	char **split=ft_split_whitespaces(str);
	ft_print_words_tables(split);
	return 0;
}
