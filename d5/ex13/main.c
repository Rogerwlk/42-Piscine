#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main()
{
	char str[] = "abdA";
	printf("%d\n", ft_str_is_lowercase(str));
	char str1[] = "a";
	printf("%d\n", ft_str_is_lowercase(str1));
	char str2[] = "z";
	printf("%d\n", ft_str_is_lowercase(str2));
	char str3[] = "";
	printf("%d\n", ft_str_is_lowercase(str3));
	char str4[] = "sgsb";
	printf("%d\n", ft_str_is_lowercase(str4));
	return (0);
}
