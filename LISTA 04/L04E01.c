#include<stdio.h>
#include<math.h>
int main()
{
    float valor1, valor2, valor3;
    printf("Digite os valores.\n");
    scanf("%f %f %f", &valor1, &valor2, &valor3);

    if(valor1 > valor2 && valor2 > valor3)
    {
        printf("%f < %f < %f", valor3, valor2, valor1);
    }
    else if(valor2 > valor1 && valor1 > valor3)
    {
        printf("%f < %f < %f", valor3, valor1, valor2);
    }
    else if(valor3 > valor1 && valor1> valor2)
    {
        printf("%f < %f < %f", valor2, valor1, valor3);
    }
    else if(valor3 > valor2 && valor2 > valor1)
    {
        printf("%f < %f < %f", valor1, valor2, valor3);
    }
    else if(valor2 > valor3 && valor3 > valor1)
    {
        printf("%f < %f < %f", valor1, valor3, valor2);
    }
    else
    {
        printf("%f <= %f <= %f", valor2, valor3, valor1);
    }


    return 0;
}
