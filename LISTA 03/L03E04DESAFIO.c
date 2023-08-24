// Lista 03 Exercicio 04 desafio


# include <stdio.h>
int main ()
{
    int horaInicial, minutoInicial,
    horaFinal, minutoFinal ,
    duracaoHoras, duracaoMinutos;

    printf ("Digite hora Inicial minuto Inicial hora Final minuto Final: ");
    scanf ("%d %d %d %d", &horaInicial,&minutoInicial,&horaFinal, &minutoFinal);
    if (horaInicial < horaFinal)
    {
        duracaoHoras = horaFinal - horaInicial;
    }
    else
    {
        duracaoHoras = 24 - horaInicial + horaFinal;
    }

    if (minutoInicial <= minutoFinal)
    {
        duracaoMinutos = minutoFinal - minutoInicial;
    }
    else
    {
        duracaoMinutos = 60 - minutoInicial + minutoFinal ;

        duracaoHoras = duracaoHoras - 1;
    }
    printf ("O jogo teve duracao de %d hora(s) e %d minuto(s)\n", duracaoHoras,
    duracaoMinutos);
return 0;
}
