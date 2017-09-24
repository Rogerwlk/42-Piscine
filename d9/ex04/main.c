#include <stdio.h>

char *ft_rot42(char *str);

int main()
{
	char origin[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	ft_rot42(origin);
	printf("%s",origin);
}
