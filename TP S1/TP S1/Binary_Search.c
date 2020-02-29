
#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}
int main()
{
	int i, ElCautat, NumEl, array[100], prim, ultim, mijloc;
	printf("Introduceti numarul de elemente: ");
	scanf("%d", &NumEl);
	printf("Introduceti elementele\n");
	for (i = 0; i < NumEl; i++)
		scanf("%d", &array[i]);

	//Quicksort

	qsort(array, NumEl, sizeof(int), cmpfunc);

	printf("Introduceti elementul cautat: ");
	scanf("%d", &ElCautat);

	//BinarySearch

	prim = 0;
	ultim = NumEl - 1;
	mijloc = (prim + ultim) / 2;
	while (prim <= ultim) {
		if (array[mijloc] < ElCautat)
			prim = mijloc + 1;
		else if (array[mijloc] == ElCautat) {
			printf("Elementul cautat este al %d din sir\n", mijloc + 1);
			break;
		}
		else
			ultim = mijloc - 1;

		mijloc = (prim + ultim) / 2;
	}
	if (prim > ultim)
		printf("Elementul cautat nu se gaseste in sir\n");

	return 0;
	exit(0);
}