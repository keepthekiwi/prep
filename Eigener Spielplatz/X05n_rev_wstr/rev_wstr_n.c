#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str) // oder mine, siehe unten
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return i;
}

int main(int argc, char *argv[])
{
	char *start;

	if (argc == 2)								// a(1)string
	{
		start = argv[1] + ft_strlen(argv[1]);	// ende ,, pointer

		while (start != argv[1])
		{
			*start = '\0';						// ende vom teilstr. brauche ich auch fuer ft_pustr
			
			while (*start != ' ' && argv[1] != start) //schauen wann wort startet
				start--;
			if (start == argv[1])				//falls nur ein Wort bzw letes Wort
				ft_putstr(start);
			else
			{
				ft_putstr(start + 1);			// weil leerzeichen nicht mit
				write(1, " ", 1);
			}
		}
	}
	write(1, "\n", 1);
}

// void ft_putstr(char *str)
// {
// 	while(*str)
// 	{
// 		write(1, str, 1);
// 		str++;
// 	}
// }

// int ft_strlen(char *str)
// {
// 	int i;

// 	i = 0;

// 	while(*str)
// 	{
// 		i++;
// 		str++;
// 	}
//	return(i);
// }