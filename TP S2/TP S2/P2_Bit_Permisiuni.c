#include <stdio.h>
#include <stdlib.h>

int verify(int pos, unsigned char utilizator)
{
	//Returneaza valoarea bitului de pe pozitia pos
	return (1 & (utilizator >> pos));
}

int main()
{
	unsigned char utilizator;
	int opt,opt_set,opt_ver;
	//Initializare
	utilizator = 0;
	do
	{
		printf("\n0.Iesire\n1.Setare stare utilizator\n2.Verificare stare utilizator\nOptiunea dvs: ");
		scanf("%d", &opt);
		switch (opt)
		{
		default:
			printf("Optiune gresita!\n");
			break;
		case 0:
			exit (0);
			break;
		case 1:
			printf("\n0. Iesire \n");
			printf("1. Schimba permisiunea Read\n");
			printf("2. Schimba permisiunea Write\n");
			printf("3. Schimba permisiunea Delete\n");
			printf("4. Schimba permisiunea Rename\n");
			printf("5. Schimba permisiunea Copy\nOptiunea dvs: ");
			scanf("%d", &opt_set);
			switch (opt_set)
			{
			default:
				printf("Optiune gresita!\n");
				break;
			case 0:
				exit(0);
				break;
			case 1: case 2: case 3: case 4: case 5:
				//Utilizeaza ChangeFlag. Schimba valoare bitului de pe pozitia opt_set
				utilizator = utilizator ^ (1 << opt_set);
				break;
			}
			break;
		case 2:
			/*if (utilizator == 0)
			{
				printf("Utilizatorul nu detine permisiuni\n");
				exit(0);
			}*/
			printf(" Read %d\n Write %d\n Delete %d\n Rename %d\n Copy %d\n", verify(1, utilizator), verify(2, utilizator), verify(3, utilizator), verify(4, utilizator), verify(5, utilizator));
			break;
		}
	} while (opt != 0);
	return 0;
}