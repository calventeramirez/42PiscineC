#include <stdio.h>

int	ft_recursive_factorial(int nb);

int main()
{
	int n = ft_recursive_factorial(6);
	int n2 = ft_recursive_factorial(0);
	int n3 = ft_recursive_factorial(1);
	int n4 = ft_recursive_factorial(3);

	printf("%d\n%d\n%d\n%d\n", n, n2, n3, n4);
}
