#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int main()
{
	int n = ft_recursive_power(2, 3);
	int n2 = ft_recursive_power(2, 0);
	int n3 = ft_recursive_power(0,-2);
	int n4 = ft_recursive_power(-2, 2);

	printf("%d\n%d\n%d\n%d\n", n, n2, n3, n4);
}
