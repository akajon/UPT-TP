#include <stdio.h>
#include <stdlib.h>

typedef struct stiva {
	int element;
	struct nod* urm;
}nod;

int verify(int numar, int pos)
{
	if (numar >> pos & 1)
		return 1;
	else
		return 0;
}

nod* push(nod* varf, int numar)
{
	nod* p;
	p = (nod*)malloc(sizeof(nod));
	p->element = numar;
	p->urm = varf;
	return p;
}

int peek(nod* varf)
{
		return varf->element;
}

nod* pop(nod* varf)
{
	varf = varf->urm;
	return varf;
}
int main()
{
	int pos_bit, i, nr_nr, numar;
	nod* st_varf;
	st_varf = NULL;
	printf("Pozitia bitului: ");
	scanf("%d", &pos_bit);
	printf("Cate numere o sa introduceti? ");
	scanf("%d", &nr_nr);
	printf("Introduceti numerele:\n");
	for (i = 0; i < nr_nr; i++)
	{
		scanf("%d", &numar);
		if (verify(numar, pos_bit))
			st_varf=push(st_varf, numar);
	}
	printf("Numerele care au 1 pe pozitia %d sunt:\n", pos_bit);
	do
	{
		printf("%d ", peek(st_varf));
		st_varf=pop(st_varf);
	} while (st_varf != NULL);
		return 0;
}