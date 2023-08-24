#include<stdio.h>
#include<math.h>
int main()
{
    float num;
    printf("Qual o numero que voce deseja calcular a raiz quadrada?\n");
    scanf("%f", &num);
    if (num > 0){
        printf("%.2f", sqrt(num));
    }
    else {
        printf("Raiz quadrada nao eh real");
    }
    return 0;
}
