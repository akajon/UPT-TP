#include <stdio.h>

int main()
{
	int i,numar,aux=0;
	printf("Introduceti numarul pana in 255: ");
	scanf("%d", &numar);
	printf("Numarul in forma binara: ");
	for (i = 7; i>-1;i--)
	{
		//Returneaza valoarea bitului de pe pozitia i
		printf("%d", 1 & (numar >> i));
		aux = aux + (1 & (numar >> i));
	}
	numar = 0;
	for (i = 0; i < aux; i++)
		numar = numar + (1<<(7-i));
	printf("\nNumarul maxim in zecimal: %d\n", numar);
	printf("Numarul maxim in binar: ");
	for (i = 7; i > -1; i--)
		//Returneaza valoarea bitului de pe pozitia i
		printf("%d", 1 & (numar >> i));
	return 0;
}