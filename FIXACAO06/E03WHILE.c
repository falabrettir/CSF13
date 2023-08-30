#include<stdio.h>

int main()
{
    int i, num;
    i = 1;
    printf("Qual tabuada voce quer calcular?\n");
    scanf("%d", &num);
    while(i<=10)
    {
        printf("%d x %d = %d\n", num, i, num*i);
        i++;
    }
    return 0;
}
