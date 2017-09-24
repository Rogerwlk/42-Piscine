#include <stdio.h>
#include <string.h>

char *ft_strncat(char *, char *, int);

int main()
{
	
	for(int i=0;i<=10;i++)
	{	char str1[10] = "abcd";
	char str2[] = "12345";
	char str3[10] = "abcd";

	ft_strncat(str1, str2, i);
	printf("%s\n",str1);
	ft_strncat(str3, str2, i);
	printf("%s\n",str3);
	}
	return 0;
}
