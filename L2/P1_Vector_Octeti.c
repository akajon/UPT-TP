#include <stdio.h>
#include <stdlib.h>
int main()
{
    char Vector[126];
	int i, opt, NewVal;
	//Initializarea vectorului
	for (i = 0; i < 126; i++)
		Vector[i] = 0;
	do
	{
        printf("\n0.Finisati\n");
		printf("1.Adaugati o noua valoare in intervalul [0;1000]\n\n");
		scanf("%d", &opt);
		switch (opt) {
		case 0:
			exit(0);
			break;
		case 1:
			//Citeste valoarea de intrare
			scanf("%d", &NewVal);
			//Utilizeaza SetFlag. Seteaza bitul de pe pozitia NewVal % 8 la valoarea 1
			Vector[NewVal / 8] = Vector[NewVal / 8] | (1 << (NewVal % 8));
			break;
		default:
			printf("Optiune gresita!\n");
			break;
		}
	} while (opt!=0);
	
	
		

	return 0;
}