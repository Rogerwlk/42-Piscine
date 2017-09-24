#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main()
{
	char dest[9] = "ab";
	char src[] = "cdefghij";
	printf("%s\n", ft_strcat(dest, src));
	char dest2[10] = "ab";
	printf("%s\n", strcat(dest2, src));
	return (0);
}
