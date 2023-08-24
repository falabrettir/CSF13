//LISTA 03 EXERCICIO 06

#include<stdio.h>
int main()
{
float x, y;
printf("Quais sao as coordenadas x e y?\n");
scanf("%f %f", &x, &y);
    if (x==0 && y==0)
    {
        printf("Pertence a origem.\n");
    }
    else if(y==0)
    {
        printf("Pertence ao eixo das abscissas.\n");
    }
    else if(x == 0)
    {
        printf("Pertence ao eixo das ordenadas.\n");
    }
    else if(x>0 && y>0)
    {
        printf("Pertence ao primeiro quadrante.\n");
    }
    else if(x>0 && y<0)
    {
        printf("Pertence ao quarto quadrante.\n");
    }
    else if(x<0 && y<0)
    {
        printf("Pertence ao terceiro quadrante.\n");
    }
    else if(x<0 && y>0)
    {
        printf("Pertence ao segundo quadrante.\n");
    }

return 0;
}
