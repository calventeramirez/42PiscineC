#include <stdio.h>

int	ft_fibonacci(int index);

int main ()
{
	int f = ft_fibonacci(4);
	int f2 = ft_fibonacci(0);
	int f3 = ft_fibonacci(-5);

	printf("%d\n%d\n%d\n", f, f2, f3);
}
