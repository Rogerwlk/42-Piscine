#include <stdio.h>
#include <stdlib.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int main(int argc, char **argv)
{
	char *res;
	
	if (argc < 4)
		printf("nbr base_from base_to\n");
	else
	{
		res = ft_convert_base(argv[1], argv[2], argv[3]);
		printf("%s\n", res);
		free(res);
	}
	return (0);
}
