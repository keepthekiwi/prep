int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;

	i = 0;
	len = ft_strlen(str) - 1;       // -1 !!
	while (len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}





//***	Eigenes Zeug	***//

#include <stdio.h>
#include <string.h>						// fuer strdup

int		ft_strlen_v2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev_v2(char *str)
{
	int i;
	int len;
	char tmp;

	i = 0;
	len = ft_strlen_v2(str) - 1;
	while (len > i)
	{
		//swap
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		//
		i++;
		len--;
	}
	printf("str ist: %s", str);			//
	return (str);
}


int main()
{
	char str[] = "hello";				// V1
	char *str2 = strdup("hello");		// V2
	ft_strrev_v2(str);					// kann hier nicht einfach "hello" reinschreiben, da sonst bus-error...da es read only sein mus (???)
}

//Output: str ist-> olleh


// int ft_strlen1(char *str)
// {
//     int i;

//     i = 0;								// wichtig
    
//     while(*str)							// *
//     {
//         i++;
//         str++;
//     }
//     printf("erste i: %i\n", i);
//     return (i);
// }