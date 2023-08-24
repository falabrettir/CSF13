// Lista 03 exercicio 01


#include<stdio.h>
int main()
{
    float p_al, p_gas, kml_al, kml_gas, n_al, n_gas;

    printf("Escreva o preco do litro do alcool\n");
    scanf("%f", &p_al);

    printf("Escreva a eficiencia em km/l em alcool\n");
    scanf("%f", &kml_al);

    printf("Escreva o preco do litro da gasolina\n");
    scanf("%f", &p_gas);

    printf("Escreva a eficiencia em km/l da gasolina\n");
    scanf("%f", &kml_gas);

    n_al = kml_al/p_al;
    n_gas = kml_gas/p_gas;
    if (n_al > n_gas)
    {
        printf("alcool eh mais eficiente.\n");
    }
    else if(n_al <= n_gas){
        printf("Gasolina eh mais eficiente.\n");
    }

    return 0;
}
