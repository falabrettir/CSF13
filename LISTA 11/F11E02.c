#include<stdio.h>
int testaNum (int a, int b){
    if((a - b)%10 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", testaNum(a, b));
    return 0;
}
