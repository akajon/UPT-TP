#include <stdio.h>
#include <stdlib.h>
int main()
{
	int vector[20], numar_elemente, suma, i, *p;
	suma = 0;
	printf("Numarul de elemente in vector: ");
	scanf("%d", &numar_elemente);
	printf("Introduceti elementele vectorului: \n");
	for (i = 0; i < numar_elemente; i++)
		scanf("%d", &vector[i]);

	p = &vector;
	for (i = 0; i < numar_elemente; i++)
		suma += *(p + i);
	printf("Suma este %d\n", suma);
	return 0;
}