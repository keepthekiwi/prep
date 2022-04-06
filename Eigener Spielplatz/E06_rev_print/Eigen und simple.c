


#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int	len;
	len = 0;

	while(*str)
	{
		str++;
		len++;
	}
	return (len);
}

char	*rev_print(char *str)
{
	int len;
	// char c;

	len = ft_strlen(str) - 1;

	while(len >= 0)
	{
		// c= str[len];
		write (1, &str[len], 1);
		len--;
	}
	return (str);
}


int main()
{
	rev_print("hello");
	return 0;
}
