#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int main ()
{
	char *origen = "Hola";
	char *dest;

	dest = ft_strdup(origen);

	printf("%s", dest);
}
