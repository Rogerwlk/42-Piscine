#include "ft_perso.h"
#include <stdio.h>
#include <unistd.h>

t_perso		**ft_decrypt(char *str);

int main()
{
	char str[]="1|robert;2|roger;3|allan;4|mom";
	t_perso **arr;
	arr=ft_decrypt(str);
	while(*arr)
	{
		printf("%d\n", (*arr)->age);
		printf("%s\n", (*arr)->name);
		arr++;
	}
	return (0);
}
