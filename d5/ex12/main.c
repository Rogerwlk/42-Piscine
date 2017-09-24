#include <stdio.h>

int ft_str_is_numeric(char *str);

int main()
{
	char str[] = "4892+63";
	printf("%d\n", ft_str_is_numeric(str));
	char str1[] = "";
	printf("%d\n", ft_str_is_numeric(str1));
	char str2[] = "63";
	printf("%d\n", ft_str_is_numeric(str2));
	char str3[] = "0";
	printf("%d\n", ft_str_is_numeric(str3));
	char str4[] = "9";
	printf("%d\n", ft_str_is_numeric(str4));
	return (0);
}
