// Assignment name  : ft_strcmp
// Expected files   : ft_strcmp.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcmp (man strcmp).

// Your function must be declared as follows:

// int    ft_strcmp(char *s1, char *s2);



// so lange die gleich sind, dann stopp

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}


int ft_strcmp_2(char *s1, char *s2)
{
	int i;

	while(*s1 && *s2 && *s1 == *s2)			// ==
	{
		s1++;								//mit i besser
		s2++;
	}
	
	return(*s1 - *s2);						//values
}


int main ()
{
	int i;
	int j;

	i = ft_strcmp("hello", "helloooo");
	j = ft_strcmp_2("hello", "helloooo");

	printf("return ist: %i\n", i);
	printf("return ist: %i\n", j);

	return 0;
}