#include<stdio.h>
unsigned long long potencia (unsigned int base, unsigned int expoente){
    unsigned long res=1;
    while(expoente)
    {
        res *= base;
        expoente--;
    }
    return res;
}
int main()
{
    unsigned int base, expoente;
    scanf("%u %u", &base, &expoente);
    printf("%llu", potencia(base, expoente));
    return 0;
}
