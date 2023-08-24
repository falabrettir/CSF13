//FIXACAO 04 EXERCICIO 3


#include<stdio.h>
int main()
{
    int anoAtual, anoContri, anoNasci,
    idade, tempoContri;
    printf("Digite o ano atual, seu ano de nascimento e o ano quando comecou a contribuir no INSS.\n");
    scanf("%d %d %d", &anoAtual, &anoNasci, &anoContri);

    idade = anoAtual - anoNasci;
    tempoContri = anoAtual - anoContri;

    printf("Voce tera %d anos ao final deste ano e ", idade);

    if ((idade >=65)||(tempoContri>=30)||(idade>=60 && tempoContri >= 25))
    {
        printf("podera se aposentar.\n");
    }
    else
    {
        printf("nao podera se aposentar");
    }
    return 0;
}
