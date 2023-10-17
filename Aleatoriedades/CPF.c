#include <stdio.h>
#define N 11

int ehValido(int *cpf);

int main()
{

    int cpf[N] = {1,2,3,4,5,6,7,8,9,0,0};

    if(ehValido(cpf))
        printf("Eh valido");
    else
        printf("Nah eh valido");

    return 0;
}

int ehValido(int *cpf)
{
    int x10_esp, x11_esp, i, soma = 0,
    soma2 = 0;
    for(i = 0; i<=8; i++)
    {
        soma+= cpf[i]*(i+1);
    }
    x10_esp = (soma%11)%10;
    for(i = 0; i<= 8; i++)
    {
        soma2 += cpf[i]*i;
    }
    x11_esp = (soma2%11)%10;
    if(x10_esp == cpf[10] && x11_esp == cpf[11])
    {
        return 1;
    }
    return 0;

}
