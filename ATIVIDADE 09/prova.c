#include<stdio.h>
#define N 11
int main()
{
    int i, esp, largura, linha;
    for(largura = N; largura>=3; largura-=2)
    {
        // printar a largura
        printf("%d\n", largura);

        esp = largura-2;

        //para algo
        for(linha = 0; linha<=largura/2; linha++)
        {
            for(i = 0; i<linha; i++)
            {
                printf(" ");
            }
            printf("%d", linha);
            for(i = 0; i < esp; i++)
            {
                printf(" ");
            }
            if(linha != largura/2)
            {
                printf("%d", linha);
            }
            printf("\n");
            esp -= 2;
        }
    }
    return 0;
}
