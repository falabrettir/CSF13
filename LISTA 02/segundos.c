#include<stdio.h>
int main()
{
    printf("Quantos segundos deseja converter?\n");
    int seg_total;
    int seg;
    int min;
    int hora;
    int dias;

    scanf("%d", &seg_total);
    printf("%d são ", seg_total);

    dias = seg_total/86400;
    seg_total = seg_total%86400;
    hora = seg_total/3600;
    seg_total = seg_total%3600;
    min = seg_total/60;
    seg = seg_total%60;
    printf("%d dias %d hora %d minutos e %d segundos.\n", dias, hora, min, seg);


}
