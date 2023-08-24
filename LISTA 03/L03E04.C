// LISTA 03 EXERCICIO 04

#include<stdio.h>
int main()
{
    int h0, h;
    printf("Entre a hora de inicio e termino do jogo.\n");
    scanf("%d %d", &h0, &h);
    if (h0 >= h)
    {
        h = h+24;
    }

    printf("O jogo durou %d horas.\n", h - h0);

    return 0;
}
