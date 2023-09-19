#include<stdio.h>
double casasDecimais (double x){
    //pegar um x e subtrair sua parte inteira caso x>=0 ou somar sua parte inteira caso x<0
    double res;
    res = x - (int) x;
    return res;
}
int main(){
    double num;
    scanf("%lf", &num);
    printf("%lf", casasDecimais(num));
    return 0;
}
