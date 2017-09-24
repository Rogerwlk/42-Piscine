#include <unistd.h>

int	ft_putstr_non_printable(char *str);

int ft_putchar(char ch)
{
	write(1, &ch, 1);
	return (0);
}

int main()
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return (0);
}
