#include <stdio.h>

int	ft_compact(char **,int);

int main()
{
	char str[]="\0ab\0cd\0\0ef";
	char *ptr= str;
	char **ptr1=&ptr;
	ft_compact(ptr1, 10);
	printf("%s\n",str);
	return 0;
}
