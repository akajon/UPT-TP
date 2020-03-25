#include <stdio.h>

char st[20];
int top = -1;

void push(char x)
{
	st[++top] = x;
}

char pop()
{
	if (top == -1)
		return -1;
	return st[top--];
}

int prioritate(char op)
{
	if (op == '(')
		return 0;
	if (op == '+' || op == '-')
		return 1;
	if (op == '*' || op == '/')
		return 2;
}

main()
{
	char exp[20];
	char* e, x;
	printf("Introduceti expresia: ");
	scanf("%s", exp);
	e = exp;
	while (*e != '\0')
	{
		//Verifica daca caracterul este alfanumeric
		if (isalnum(*e))
			printf("%c", *e);
		else if (*e == '(')
			push(*e);
		else if (*e == ')')
		{
			while ((x = pop()) != '(')
				printf("%c", x);
		}
		else
		{
			while (prioritate(st[top]) >= prioritate(*e))
				printf("%c", pop());
			push(*e);
		}
		e++;
	}
	while (top != -1)
	{
		printf("%c", pop());
	}
	printf("\n");
	system("pause");
	return 0;
}