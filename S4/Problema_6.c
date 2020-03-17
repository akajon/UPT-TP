#include <stdio.h>
int* sum(int n1, int n2)
{
	int suma;
	suma = n1 + n2;
	return &suma;
}
int main()
{
	int n1, n2, *suma;
	printf("Introduceti numerele: \n");
	scanf("%d %d", &n1, &n2);
	suma = sum(n1, n2);
	printf("Suma este %d\n", *suma);
	return 0;
}