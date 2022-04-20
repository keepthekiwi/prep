#include <unistd.h>
#include <stdlib.h>

int		main(int ac, char **av)
{
	char *rest;
	char *end_of_first_word;

	if (ac == 2)
	{
		while (av[1] && (*av[1] == ' ' || *av[1] == '\t'))
			av[1]++;
		end_of_first_word = av[1];	//start erstes wort
		while (*end_of_first_word && *end_of_first_word != ' ' && *end_of_first_word != '\t')
			end_of_first_word++; // ende erstes wort
		rest = end_of_first_word;
		while (*rest && (*rest == ' ' || *rest == '\t'))
			rest++;
		while (*rest)
		{
			while (*rest && *rest != ' ' && *rest != '\t')
				write(1, rest++, 1);
			write(1, " ", 1);
			while (*rest && (*rest == ' ' || *rest == '\t'))
				rest++;
		}
		while (av[1] != end_of_first_word)
			write(1, av[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}
