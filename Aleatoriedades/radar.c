#include<stdio.h>
#include<math.h>
int main()
{
    int vel_carro, vel_max;
    printf("Qual a velocidade do carro em km/h?\n");
    scanf("%d", &vel_carro);
    printf("Qual a velocidade maxima da via?\n");
    scanf("%d", &vel_max);
    if (vel_carro > vel_max)
    {
        printf("Infracao cometida e multa recebida no valor de %d reais.\n", (vel_carro - vel_max) * 50);

    }
    else
    {
        printf("Não houve infracao.");
    }
    return 0;
}
