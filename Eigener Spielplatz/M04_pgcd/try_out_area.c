

//groesster gemeinsamer Nenner
//greatest common divisor = gcd
//Er ist die größte natürliche Zahl, durch die sich zwei ganze Zahlen ohne Rest teilen lassen

#include <stdio.h>
#include <stdlib.h>

void	pgcd(int a, int b)						//av1 und av2
{
	int i;
	int gcd;

	i = 1;									// 1 das ist der Nenner mit dem ich es 					//versuche// und dann gehe ich immer hoeher
	gcd = 0;								// 0 //muesste das nicht 1 sein, da durch 0 			//kann man ja nicht teilen
	while (i < a && i < b)
	{
		if (a % i == 0 && b % i == 0)		// so lange bist rest ensteht, i immer 1 hoeher
			gcd = i; //!!
		i++;
	}
	printf("%d", gcd);
}

int		main(int ac, char **av)				// int, char
{
	if (ac == 3)
		pgcd(atoi(av[1]), atoi(av[2]));
	printf("\n");
	return (0);
}
