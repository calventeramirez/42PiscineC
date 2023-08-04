#include <stdio.h>

char *ft_strcapitalize(char *str);

int main()
{
	char s[50000] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	printf("%s", ft_strcapitalize(s));
}
