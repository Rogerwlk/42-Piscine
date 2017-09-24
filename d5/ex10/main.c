#include <stdio.h>

char	*ft_strcapitalize(char *str);

int main()
{
	char str[] = "  04SaLUT, cOmMENt tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}
