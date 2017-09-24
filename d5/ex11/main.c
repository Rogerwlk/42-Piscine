#include <stdio.h>

int ft_str_is_alpha(char *str);

int main()
{
	char str[] = "az";
	printf("%d\n", ft_str_is_alpha(str));
	char str1[] = "abf";
	printf("%d\n", ft_str_is_alpha(str1));
	char str2[] = " ";
	printf("%d\n", ft_str_is_alpha(str2));
	char str3[] = "AGD";
	printf("%d\n", ft_str_is_alpha(str3));
	char str4[] = "bfD gd";
	printf("%d\n", ft_str_is_alpha(str4));
	return (0);
}
