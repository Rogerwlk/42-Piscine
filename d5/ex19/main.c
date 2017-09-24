#include <stdio.h>
#include <string.h>

unsigned ft_strlcpy(char *dest, char *src, unsigned);

int main()
{
	for (int i = 0; i <= 10; i++)
	{
		char str1[10]="abc";
		char str2[]="12345";
		printf("%u\n", ft_strlcpy(str1, str2, i));
		for (int j = 0; j < 10; j++)
			printf("%c", str1[j]);
		printf("\n");
		char str3[10]="abc";
		printf("%lu\n", strlcpy(str3, str2, i));
		for (int j = 0; j < 10; j++)
			printf("%c", str3[j]);
		printf("\n");
	}
	return (0);
}
