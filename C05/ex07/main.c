#include <stdio.h>

int	ft_find_next_prime(int nb);

int main()
{
	int n = ft_find_next_prime(7);
	int n1 = ft_find_next_prime(2);
	int n2 = ft_find_next_prime(5);
	int n3 = ft_find_next_prime(100);

	printf("%d\n%d\n%d\n%d\n", n, n1,n2, n3);
}
