#include<stdio.h>
int main()
{
    printf("Quais sao os numeros que vc deseja calcular a media?\n");
    int n1, n2, n3, n4, n5;
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    float media = (n1+n2)/2.0;
    printf("%f\n", media);
    media = (n1+n2+n3)/3.0;
    printf("%f\n", media);
    media = (n1+n2+n3+n4)/4.0;
    printf("%f\n", media);
    media = (n1+n2+n3+n4+n5)/5.0;
    printf("%f\n", media);
    return 0;


}
