#include <stdio.h>

char	*ft_strlowcase(char *str);

int main()
{
	char str[] = "WHO Is YOUr Daddy? LOL";

	printf("%s\n", ft_strlowcase(str));
	printf("%s\n", str);
	return (0);
}
