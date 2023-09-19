#include <stdio.h>
#include <math.h>
int arredonda(double x)
{
    //pegar um double e arredondá-lo para o valor inteiro mais prox
    int res, sign;
    //o modulo do numero por 1 ira fornecer as casas decimais.
    //o resultado da divisao por 1 fornecera a parte inteira
    //caso o módulo1 seja <0.5 subtrair 1 caso x > 0 e somar 1 caso x <0
    //caso o módulo1 seja >0.5 somar 1 caso x>0 e subtrair 1 caso x<0
    //caso o módulo1 seja =0.5 somar 1 caso x>0 s subtrair 1 caso x<0
    if(x>=0)
    {
        res = (int) (x+0.5);
    }
    else
    {
        res = (int) (x-0.5);
    }
    return res;
}
int main()
{
    double num;
    scanf("%lf", &num);
    printf("%d", arredonda(num));
}

