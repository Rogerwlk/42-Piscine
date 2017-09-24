#include <stdio.h>

int ft_atoi_base(char *, char *);

int main()
{
	char str1[]="-457346";
	char str2[]="01234567";
	printf("%d",ft_atoi_base(str1,str2));
	return 0;
}
