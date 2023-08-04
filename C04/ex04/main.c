#include <unistd.h>
void	ft_putnbr_base(int nbr, char *base);

int main()
{
	ft_putnbr_base(123,"0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(123, "01");
	write(1, "\n", 1);
	ft_putnbr_base(123, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(123, "poniguay");
	write(1, "\n", 1);
	ft_putnbr_base(123, "-01");
	write(1, "\n", 1);
	ft_putnbr_base(123,"");
	write(1, "\n", 1);
	ft_putnbr_base(123, "001");
	write(1, "\n", 1);
	ft_putnbr_base(123, "+123456789");
	write(1, "\n", 1);
}
