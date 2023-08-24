//



#include<stdio.h>
#include<math.h>
int main()
{
    float d;
    printf("Qual a distancia que a cesta foi pontuada?\n");
    scanf("%f", &d);


    if(d<= 800)
    {
        printf("A cesta valeu 1 ponto.\n");
    }
    else if(d<=1400)
    {
        printf("A cesta valeu 2 pontos.\n");
    }
    else
    {
        printf("A cesta valeu 3 pontos.\n");
    }
    return 0;
}
