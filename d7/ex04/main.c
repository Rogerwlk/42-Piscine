#include <stdlib.h>
#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int main(int argc, char **argv)
{
	argc = 0;
	char **split;
	char *test = argv[1];
	test = "fasihg\n";
	int i=0;
	split = ft_split_whitespaces(test);
	while (split[i] != 0)
	{
		printf("%s\n",split[i]);
		i++;
	}
	free(split);
	return (0);
}
