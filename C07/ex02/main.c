#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int main()
{
	int **r;
	int i = 0;
	int v = 0;

	v = ft_ultimate_range(r, 3, 9);

	if (v != -1)
	{
		while (i < 6)
		{
			printf("%d\n", r[0][i]);
			i++;
		}
	}
}
