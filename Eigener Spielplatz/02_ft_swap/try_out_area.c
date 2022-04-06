// Assignment name  : ft_swap
// Expected files   : ft_swap.c
// Allowed functions: 
// --------------------------------------------------------------------------------

// Write a function that swaps the contents of two integers the adresses of which
// are passed as parameters.

// Your function must be declared as follows:

// void	ft_swap(int *a, int *b);

#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int tmp;    // hier kein *

    tmp = *a; // hier kein *
    *a = *b;
    *b = tmp;

    return ;
}





void ft_swap_test(int *a, int *b)
{
    int tmp;

    tmp = *a; // hier kein *
    *a = *b;
    *b = tmp;

    printf("a neu ist: %d\nb neu ist: %d\n", *a, *b);

    return ;
}

int main()
{
    int a;
    a = 1;

    int b;
    b = 2;

    ft_swap_test(&a, &b);
    return (0);
}

//gcc try_out_area.c