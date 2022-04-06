// Assignment name  : print_bits
// Expected files   : print_bits.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
// AT THE END.

// Your function must be declared as follows:

// void	print_bits(unsigned char octet);

// Example, if you pass 2 to print_bits, it will print "00000010"



//merken:
        //  while i aussen
        // zweimal write 1 -> 0
        // dann zweimal i = i/2
        // einmal octet modulu i


#include <stdio.h>

void print_bits(unsigned char octet)
{
    int i;

    i= 128;


    while (i > 0)
    {
        if(octet => i)
        {
            write(1,"1",1);
            octet = octet % i;
            i = i /2;


        }

    else
    {
        write (1,"0",1);
        i = i/2;


    }



    }




}