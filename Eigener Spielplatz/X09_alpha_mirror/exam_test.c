#include <unistd.h>
#include <stdio.h>
#include <string.h>
void alpha_mirror(char *str)
{
	char c;

printf("test %s \n", str);


int i;
i = 0;

	while(str[i])
	{
		str[i] = 'A';
		i++;

	}
}

int main()
{
	alpha_mirror("hallo"); // funktioniert nicht, ist ein l value. heisst ist sozusagen ein const string (da ich ihn vorher nicht allokiert habe) (jetzt im stack)/// bei allokated im heap
	// alpha_mirror(strdup("hallo"));

	return 0;
}

//allokated immer im heap

//nicht allokated zb in t dann im stack