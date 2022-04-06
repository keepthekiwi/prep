// Assignment name  : ft_strrev
// Expected files   : ft_strrev.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write a function that reverses (in-place) a string.

// It must return its parameter.

// Your function must be declared as follows:

// char    *ft_strrev(char *str);


// ------------------------------
//merken:
            //strlen
            //swap

// https://pythontutor.com/visualize.html#code=int%20%20%20%20%20%20%20%20ft_strlen%28char%20*str%29%0A%7B%0A%20%20%20%20int%20i%3B%0A%0A%20%20%20%20i%20%3D%200%3B%0A%20%20%20%20while%20%28str%5Bi%5D%20!%3D%20'%5C0'%29%0A%20%20%20%20%20%20%20%20i%2B%2B%3B%0A%20%20%20%20return%20%28i%29%3B%0A%7D%0A%0Achar%20%20%20%20*ft_strrev%28char%20*str%29%0A%7B%0A%20%20%20%20int%20i%3B%0A%20%20%20%20int%20len%3B%0A%20%20%20%20char%20tmp%3B%0A%0A%20%20%20%20i%20%3D%200%3B%0A%20%20%20%20len%20%3D%20ft_strlen%28str%29%20-%201%3B%0A%20%20%20%20while%20%28len%20%3E%20i%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20tmp%20%3D%20str%5Bi%5D%3B%0A%20%20%20%20%20%20%20%20str%5Bi%5D%20%3D%20str%5Blen%5D%3B%0A%20%20%20%20%20%20%20%20str%5Blen%5D%20%3D%20tmp%3B%0A%20%20%20%20%20%20%20%20i%2B%2B%3B%0A%20%20%20%20%20%20%20%20len--%3B%0A%20%20%20%20%7D%0A%20%20%20%20return%20%28str%29%3B%0A%7D%0A%0A%0A%0Aint%20main%28%29%20%7B%0A%20%20%20%20char%20str%5B%5D%20%3D%20%22hello%22%3B%0A%0A%20%20%20%20ft_strrev%28str%29%3B%0A%20%20return%200%3B%0A%7D&cumulative=false&curInstr=0&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false

#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;

    while(*str)
    {
        i++;
        str++;
    }
    printf("erste i: %i\n", i);
    return (i);
}

char *ft_strrev(char *str)
// ersten und letzten tauschen / bei ungerader Wortanzahl einfach mitte mit sich selbst tauschen
{
    int i;
    i = 0;

    int len;
    char tmp;                        //kein pointer, sondern nur einzelner Buchstabe

    len = ft_strlen(str)-1;          //len von hinten; i von vorne

    while (len > i)
    
        tmp = str[i]                 //  erster mit letzen tauschen
        str[i] = str[len];
        str[len]=tmp;

        i++;                        // nicht vergessen
        len--;

    }
    return (str);
}






int main()
{
    char str[] = "hello";

    ft_strlen(str);

    return 0;
}


