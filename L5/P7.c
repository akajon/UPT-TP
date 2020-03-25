#include <stdio.h>
#include <stdlib.h>

typedef struct stack {
	int element;
	struct nod* urm;
}nod;

nod* push(nod* stack, int cifra)
{
	nod* p;
	p = (nod*)malloc(sizeof(nod));
	p->element = cifra;
	p->urm = stack;
	return p;
}

nod* pop(nod* stack)
{
    stack = stack->urm;
	return stack;
}

int peek(nod* stack)
{
	return stack->element;
}

nod* dec_to_bin(int numar, nod* stack)
{
	do {
		stack = push(stack, (numar & 1));
		numar = numar >> 1;
	} while (numar);
	return stack;
}

nod* dec_to_stack(int numar, nod* stack)
{
	do {
		stack=push(stack, numar % 10);
		numar = numar / 10;
	} while (numar);
	return stack;
}

int is_dec_p(nod* stack, int numar)
{
	int is;
	is = 1;
	do
	{
		if (stack->element != (numar % 10))
			is = 0;
		numar = numar / 10;
		stack=pop(stack);
	} while (numar && is &&stack);
	return is;
}

int is_bin_p(nod* stack, int numar)
{
	int is;
	is = 1;
	do
	{
		if ((1 & numar) != peek(stack))
			is = 0;
		numar = numar >> 1;
		stack=pop(stack);
	} while (is && numar);
	return is;
}

int main()
{
	int numar;
	nod* st_varf_bin;
	nod* st_varf_dec;
	st_varf_bin = NULL;
	st_varf_dec = NULL;

	//Citirea conditionata
	printf("Introduceti numarul pana in 65535: \n");
	do
	{
		scanf("%d", &numar);
	} while (numar > 65535);

	//Transformarea dec_to_bin cu introducerea bitilor in stiva st_varf_bin
	st_varf_bin=dec_to_bin(numar, st_varf_bin);

	//Introducerea fiecarei cifre in stiva st_varf_dec
	st_varf_dec=dec_to_stack(numar, st_varf_dec);

	//Verificarea daca numarul e palindrom
	if (is_bin_p(st_varf_bin, numar) && is_dec_p(st_varf_dec, numar) )
		printf("Numarul este palindrom\n");
	else
		printf("Numarul nu este palindrom\n");
	return 0;
}