#include <stdio.h>

int	*ft_range(int min, int max);

int main()
{
	int i = 0;
	int *a = ft_range(13, 5);
	
	while (i < 5){
		printf("%d\n", a[i]);
		i++;
	}
}
