#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    printf("Qual o numero a se obter o modulo?\n");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("%d\n", -num);
    }
    else
    {
        printf("%d\n", num);
    }
    return 0;


}
