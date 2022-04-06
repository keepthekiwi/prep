// Assignment name  : ft_strlen
// Expected files   : ft_strlen.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write a function that returns the length of a string.

// Your function must be declared as follows:

// int	ft_strlen(char *str);

#include <stdio.h>


int ft_strlen(char *str)
{
	int	len;

	while(*str)					// * beachten (weil * bedeutett Value vom Poiter), sonst adresse und die hat ja immer einen wert und somit unifite loop
	{
		len ++;
		str ++;
	}
	return (len);
}


int		ft_strlen2(char *str)
{
	int i;

	// i = 0;
	while (str[i])
		i++;
	return (i);
}


int main ()
{
	int i;
	int j;

	i = ft_strlen("Hallo");
	printf("len ist: %i\n", i);

	j = ft_strlen2("Hallo");
	printf("2len ist: %i\n", j);

	return 0;
}