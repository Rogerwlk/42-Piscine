#include <stdio.h>

char *ft_strupcase(char *str);

int main()
{
	char str[] = "who is your daddy? lol";

	printf("%s\n",ft_strupcase(str));
	printf("%s\n", str);
	return 0;
}
