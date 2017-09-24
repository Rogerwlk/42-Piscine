#include <stdio.h>
#include <string.h>

int ft_strncmp(char *,char *, unsigned int);

int main()
{
	char str1[]="abc";
	char str2[]="abcdef";
	for(int i=0;i<=6;i++)
	{
		printf("%d\n",ft_strncmp(str1,str2,i));
		printf("%d\n",strncmp(str1,str2,i));
	}
	return 0;
}
