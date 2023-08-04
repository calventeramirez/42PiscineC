#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str);

int main()
{
	char *str = "123";
	char *str1 = "-123";
	char *str2 = "459*8";

	printf("%d\n%d\n%d\n", ft_atoi(str), ft_atoi(str1), ft_atoi(str2));

}
