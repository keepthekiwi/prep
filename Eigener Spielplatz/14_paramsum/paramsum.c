

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);		//putnbr //zehnerpotenz
		ft_putnbr(nb % 10);		// letzte zahl
	}
	else
		ft_putchar(nb + '0');	//puchar  // ' '
}

int		main(int ac, char **av)	
{
	(void)av;
	ac--;
	ft_putnbr(ac);
	ft_putchar('\n');			// ' '
	return (0);
}
