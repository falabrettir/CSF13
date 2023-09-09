#include<stdio.h>

int main()

{
    int num, i=1;
    scanf("%d", &num);

    while(num!=1)
    {
        printf("%d ", num);
        if(num%2==0)
        {
            num /= 2;
        }
        else
        {
            num = 3*num + 1;
        }
        i++;

    }
    printf("%d\n%d elementos", num, i);
    return 0;
}
