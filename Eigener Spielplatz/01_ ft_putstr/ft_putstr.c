#include <unistd.h>

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





//***		Eigener Code	***//

void	ft_putstr_2(char *str)
{
	while(*str)							// * nicht vergessen/ da wert nicht Adresse
	{
		write(1, str, 1);				//
		str++;
	}
}

//***		Tester			***//

int main()
{
	char	*str;

	str = "test\n";
	ft_putstr(str);
	ft_putstr_2(str);
}