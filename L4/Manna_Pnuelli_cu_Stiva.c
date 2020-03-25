#include <stdio.h>
#include <stdlib.h>

typedef struct stiva{
	int element;
	struct stiva* urm;
}nod;

int manna(int n)
{
	int rezultat;
	if (n >= 12)
		rezultat= n - 1;
	else
		rezultat = n + 2;
	return rezultat;
}

nod* push(nod* top, int nr)
{
	nod* p;
	p = (nod*)malloc(sizeof(nod));
	p->element = nr;
	p->urm = top;
	return p;
}

int peek(nod* top)
{
	if (top!=NULL)
		return top->element;
}

nod* pop(nod* top)
{
	nod* p;
	p = top->urm;
	return p;
}

int main()
{
	int numar, aux;
    nod* top;
	top = NULL;
	printf("Introduceti un numar: ");
	scanf("%d", &numar);
	printf("f(%d)=", numar);
	top = push(top, numar);
	while (top!=NULL)
	{	
		aux = peek(top);
		if (aux >= 12)
		{
			top = pop(top);
			if (top == NULL)
				//afiseaza rezultatul
				printf("%d", manna(aux));
			else
			{
				top = pop(top);
				top = push(top, manna(aux));
			}
		}
		else
			top = push(top, manna(aux));
	}
	return 0;
}