

#include <stdlib.h>

//fuer int VORZEICHEN
int		ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int		*ft_range(int start, int end)
{
	int i;
	int *tab; //pointer

	i = 0;
	tab = (int*)malloc(sizeof(int) * ft_abs(start - end) + 1);			// why (int*)?

	while (start < end)			// <
	{
		tab[i] = start;
		start++;				// same wie unten nur ++
		i++;
	}
	tab[i] = start;

	while (start > end)			// >
	{
		tab[i] = start;
		start--;				// --
		i++;
	}
	tab[i] = start;

	return (tab); //pointe back
}
