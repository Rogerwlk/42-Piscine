#include <stdio.h>

char *ft_strrev(char *str);

int main()
{
	char ori[]="a";
	char *rev=ft_strrev(ori);
	printf("%s",rev);
	return (0);
}
