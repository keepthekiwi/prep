#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
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

	if (argc == 2)
	{
		start = argv[1] + ft_strlen(argv[1]); // ende

		while (start != argv[1])
		{
			*start = '\0';
			while (*start != ' ' && argv[1] != start)
				start--;
			if (start == argv[1])
				ft_putstr(start);
			else
			{
				ft_putstr(start + 1);			//weil leerzeichen nicht mit
				write(1, " ", 1);
			}
		}
	}
	write(1, "\n", 1);
}