#include <stdlib.h>
#include <stdio.h>

char *ft_concat_params(int,char**);

int main(int argc, char **argv)
{
	char *str;
	
	str = ft_concat_params(argc, argv);
	printf("%s", str);
	free(str);
	return (0);
}
