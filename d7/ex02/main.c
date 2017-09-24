#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int main()
{
	int *r;
	int min=0;
	int max=5;
	ft_ultimate_range(&r, min, max);
	for(int i=0;i<5;i++)
		printf("%d",r[i]);
	free(r);
	return (0);
}
