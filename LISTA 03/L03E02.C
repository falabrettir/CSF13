//Lista 03 exercicio 02


#include<stdio.h>
int main()
{
    int z1;
    printf("Digite um numero inteiro nao negativo de tres digitos,\n");
    scanf("%d", &z1);
    printf("O numero eh %d.", z1%10*100 + z1%100/10*10 + z1/100);
    return 0;

}
