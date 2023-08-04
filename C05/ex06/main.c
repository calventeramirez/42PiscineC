#include <stdio.h>

int ft_is_prime(int nb);

int main()
{
	int n = ft_is_prime(13);
	int n2 = ft_is_prime(14);
	int n3 = ft_is_prime(-13);
	int n4 = ft_is_prime(0);
	int n5 = ft_is_prime(1);
	int n6 = ft_is_prime(2);

	printf("%d\n%d\n%d\n%d\n%d\n%d\n", n, n2, n3, n4, n5, n6);
}
