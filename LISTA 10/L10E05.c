#include<stdio.h>
unsigned int inverteNum (unsigned int n){
    int resp;
    //dividir o numero por 10 repetidas vezes pegar o resto e multiplicar por 10 e somar o resto

    resp = 0;
    while(n>0)
    {
        resp = resp*10 +n%10;
        n /= 10;
    }
    return resp;
}
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", inverteNum(num));
    return 0;

}
