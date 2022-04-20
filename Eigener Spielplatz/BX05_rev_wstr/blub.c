#include <unistd.h>
#include <stdlib.h>


void ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}

int ft_strlen(char *str)
{
	int i;

	i = 0;

	while(*str)
	{
		i++;
		str++;
	}
	return (i);
}



int main (int ac, char *av[])
{


}

//ende vom string
//while ich noch nciht am start bioon


//gcc blub.c
//./a.out hello
//./a.out "hello du bist"