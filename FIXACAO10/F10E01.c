#include<stdio.h>

int ehBissexto (int ano){
    if((ano%400==0)||(ano%4==0 && ano%100!=0))
        return 1;
    else
        return 0;
}
int main(){
    int x;
    x = ehBissexto(2016);
    printf("%d", x);
    return 0;
}

