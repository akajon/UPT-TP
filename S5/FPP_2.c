//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct stiva
//{
//	char element;
//	struct stiva* urm;
//}nod;
//
//char peek(nod* varf)
//{
//	if (varf)
//		return varf->element;
//	else
//		return NULL;
//}
//
//nod* pop(nod* varf)
//{
//	if (varf!=NULL)
//	{
//		varf = varf->urm;
//		return varf;
//	}
//	else
//		return NULL;
//}
//
//nod* push(nod* varf, char c)
//{
//	nod* p;
//	p = (nod*)malloc(sizeof(nod));
//	p->element=c;
//	p->urm = varf;
//	return p;
//}
//
//prioritate_1(int* pos, char* vector, char caracter)
//{
//	*(vector + *pos) = caracter;
//	*pos++;
//}
//
//nod* prioritate_2(nod* varf, int* pos, char* vector, char tmp)
//{
//	char temp2;
//	temp2 = peek(varf);
//	varf = pop(varf);
//	if(temp2 == '*' || temp2 == '/')
//		prioritate_1(&pos, &vector, temp2);
//	varf = push(varf, tmp);
//	return varf;
//}
//
//int main()
//{
//	nod* st_varf;
//	char vector[10], caracter, tmp;
//	int nr_elemente, i;
//	nr_elemente = 0;
//	st_varf = NULL;
//	do
//	{
//		caracter = getchar();
//		getchar();
//		if (caracter >= 'a' && caracter <= 'z')
//		{
//			vector[nr_elemente] = caracter;
//			nr_elemente++;
//		}
//		else
//		{
//				if (caracter == '*' || caracter == '/')
//					prioritate_1(&nr_elemente, &vector, caracter);
//				else if (caracter == '+' || caracter == '-')
//					st_varf = prioritate_2(st_varf, &nr_elemente, &vector, caracter);
//		}
//	} while (caracter != ')');
//	do
//	{
//		vector[nr_elemente] = peek(st_varf);
//		nr_elemente++;
//		st_varf = pop(st_varf);
//	} while (st_varf);
//	for (i=0;i<nr_elemente;i++)
//		printf("%c", vector[i]);
//	printf("%d", nr_elemente);
//	return 0;
//}