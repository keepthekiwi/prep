#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;

	i = 128;
	while (i > 0)
	{
		if (octet >= i)
		{
			write(1, "1", 1);
			octet %= i;
			i /= 2; 
		}
		else
		{
			write(1, "0", 1);
			i /= 2;
		}
	}
}


//***	same same but different		***//

// 1 Byte = 8 Bits = 2^8 = 256 Zustaende => 8 Stellen

#include <stdio.h>

void	print_bits_v2(unsigned char octet)		// unsigend char geht max bis 256 (somit nur 255 moeglich), sonst 9 Stellen
{
	int i;

	i = 128;
	while (i > 0)
	{
		if (octet >= i)							// erste Stelle 256 wird abgefangen
		{
			write(1, "1", 1);					// 256		// " "
			octet = octet % i;					// x % y = was von x uebrig bleibt
			i = i / 2;							// Kommadinger verfallen
		}
		else
		{
			write(1, "0", 1);
			i = i / 2;
		}
	}
}

int main ()
{
	print_bits_v2 (256);
}

// i: 64
// i: 32
// i: 16
// i: 4
// i: 1

// octet: 106
// octet: 42
// octet: 10
// octet: 2
// octet: 0


// wenn i = 127 (Kommastelle faellt weg)

// i: 63
// i: 31
// i: 15
// i: 3
// i: 1


//Eigen

void bits(unsigned char octet)
{
	int i;

	i = 1 << 7;
	while (i)
	{
		if  (octet & i)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i >>= 1;
	}
}