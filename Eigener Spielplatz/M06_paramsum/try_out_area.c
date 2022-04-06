

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)					// einzelne stellen
{
	if (nb > 9)
	{
		//rekursive
		ft_putnbr(nb / 10);					// 10
		ft_putnbr(nb % 10);					// Rest mod10
	}
	else
		ft_putchar(nb + '0');				//ausdrucken
}

int		main(int ac, char **av)
{
	(void)av;						//!
	ac--;							// !
	ft_putnbr(ac);
	ft_putchar('\n');				// ! ' '
	return (0);
}
