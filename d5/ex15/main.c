#include <stdio.h>

int ft_str_is_printable(char *str);

int main()
{
	char str[] = " abcdefghijklmnopqrstuvwxyz01234567890`,./;'[]\\-=!@#$%^&*()_+{}|:\"?><~";

	printf("%d\n", ft_str_is_printable(str));
	return (0);
}
