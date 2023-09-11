#include<stdio.h>
int main()
{
    int num, i, cont, flag;
    scanf("%d", &num);
    flag = 0;
    while(flag==0)
    {
        cont = 0;
        for(i=2; i<=num; i++)
        {
            if((num%i)!=0)
            break;
        }
        if(i>num)
        {
            flag = 1;
        }
        else
        {
            num++;
        }
    }
    printf("%d", num);
    return 0;
}
