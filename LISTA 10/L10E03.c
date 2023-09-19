#include<stdio.h>
int proxFibonacci (int n){
    //gerar a seq de fibo ate fibo>n
    int fibo, ant1, ant2;
    ant1 = 1;
    ant2 = 0;
    fibo = ant1 + ant2;
    while(fibo < n)
    {
        ant2 = ant1;
        ant1 = fibo;
        fibo = ant1 + ant2;
    }
    return fibo;

}
int main(){
    int num;
    scanf("%d", &num);
    printf("%d", proxFibonacci(num));
    return 0;
}

