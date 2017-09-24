#include <stdio.h>

int ft_find_next_prime(int nb);

int main()
{
	/*for(int i=5;i<10;i++)
	{
		printf("%d  %d;\t",i,ft_find_next_prime(i));
	}*/	
	int i=2147483630;
	printf("%d  %d;\t",i,ft_find_next_prime(i));
	return (0);
}
