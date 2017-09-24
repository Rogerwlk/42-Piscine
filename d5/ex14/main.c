#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main()
{
	char str[] = "A";
	printf("%d\n", ft_str_is_uppercase(str));
	char str1[] = "Z";
	printf("%d\n", ft_str_is_uppercase(str1));
	char str2[] = "";
	printf("%d\n", ft_str_is_uppercase(str2));
	char str3[] = "sgABZ";
	printf("%d\n", ft_str_is_uppercase(str3));
	char str4[] = "x";
	printf("%d\n", ft_str_is_uppercase(str4));
	return (0);
}
