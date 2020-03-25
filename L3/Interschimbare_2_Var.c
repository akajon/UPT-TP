#include <stdio.h>
//Interschimbare folosind variabila auxiliara
int swap1(int *x, int *y)
{
    int aux;
    aux=*x;
    *x=*y;
    *y=aux;
}
//Interschimbare matematica (I varianta)
int swap2(int *x, int *y)
{
    *x=*y+*x;
    *y=*x-*y;
    *x=*x-*y;
}

//Interschimbare matematica (II varianta)
int swap3(int *x, int *y)
{
    *x=*y**x;
    *y=*x/(*y);
    *x=*x/(*y);
}

//Interschimbare folosind operatorul XOR
swap4(int *x, int *y)
{
     *x=*x^*y;
     *y=*y^*x;
     *x=*x^*y;
}

int main()
{
    int a=1,b=2;
    swap1(&a,&b);
    printf("swap1 -> a=%d b=%d\n",a,b);
    swap2(&a,&b);
    printf("swap2 -> a=%d b=%d\n",a,b);
    swap3(&a,&b);
    printf("swap3 -> a=%d b=%d\n",a,b);
    swap4(&a,&b);
    printf("swap4 -> a=%d b=%d\n",a,b);
    return 0;
}
