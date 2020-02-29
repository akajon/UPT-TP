#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, ElCautat, NumEl, array[100];
	printf("Introduceti numarul de elemente: ");
	scanf("%d", &NumEl);
	printf("Introduceti elementele\n");
	for (i = 0; i < NumEl; i++)
		scanf("%d", &array[i]);
	printf("Introduceti elementul cautat: ");
	scanf("%d", &ElCautat);
	i = 0;
	while (array[i] != ElCautat && i<NumEl)
		i++;
	if (array[i] == ElCautat)
		printf("Elementul cautat este al %d din sir\n",i+1);
	else
		printf("Elementul cautat nu se gaseste in sir\n");
	return 0;
	exit(0);
}