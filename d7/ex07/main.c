#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str, char *charset);

int main(int argc, char **argv)
{
	char **split;
	int i;

	if (argc < 3)
	{
		printf("str, charset\n");
	}
	else
	{
		split = ft_split(argv[1], argv[2]);
		i = 0;
		while (split[i] != 0)
		{
			printf("%s\n",split[i]);
			i++;
		}
		free(split);
	}
	return (0);
}
