#include <stdio.h>

int ft_atoi(char *str);

int main()
{
	char str1[]="1234";
	printf("%d\n",ft_atoi(str1));
	char str2[]="0.64";
	printf("%d\n",ft_atoi(str2));
	char str3[]="-1234";
	printf("%d\n",ft_atoi(str3));
	char str4[]="-12bfsd";
	printf("%d\n",ft_atoi(str4));
	return (0);
}
