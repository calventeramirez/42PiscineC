#include <stdio.h>
#include <string.h>

int ft_strlen(char *str);

int main()
{
	char *s = "Hola holilla vecinillo";
	printf("%d\n%lu",ft_strlen(s), strlen(s));
}
