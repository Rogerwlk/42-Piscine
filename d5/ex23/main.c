#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size);
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int main()
{
	char arr[]="Salut les aminches c'est cool show mem on fait de truc terrible\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	ft_print_memory(arr, sizeof(arr));
	return (0);
}
