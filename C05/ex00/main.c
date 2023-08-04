#include <stdio.h>

int	ft_iterative_factorial(int nb);

int main()
{
	int n = ft_iterative_factorial(6);
	int n2 = ft_iterative_factorial(0);
	int n3 = ft_iterative_factorial(1);
	int n4 = ft_iterative_factorial(3);

	printf("%d\n%d\n%d\n%d\n", n, n2, n3, n4);
}
