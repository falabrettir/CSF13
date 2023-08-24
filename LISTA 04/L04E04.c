//



#include<stdio.h>
#include<math.h>
int main()
{
    int valor, ced100, ced50, ced20, ced10, ced5, ced2, ced1;
    printf("Qual o valor?\n");
    scanf("%d", &valor);
    ced100 = valor/100;
    ced50 = valor%100/50;
    ced20 = valor%50/20;
    ced10 = valor%50%20/10;
    ced5 = valor%10/5;
    ced2 = valor%5/2;
    ced1 = valor%5%2;
    printf("%d notas de 100 % d notas de 50 %d notas de 20 %d notas de 10 %d notas de 5 %d notas de 2 %d notas de 1", ced100, ced50, ced20, ced10, ced5, ced2, ced1);

    return 0;
}
