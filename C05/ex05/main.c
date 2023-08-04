#include <stdio.h>

int ft_sqrt(int nb);

int main()
{
	int n = ft_sqrt(4);
	int n2 = ft_sqrt(2147483647);
	int n3 = ft_sqrt(9);
	int n4 = ft_sqrt(-1);

	printf("%d\n%d\n%d\n%d\n", n, n2, n3, n4);
}
