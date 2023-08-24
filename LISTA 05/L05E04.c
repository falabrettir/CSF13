#include<stdio.h>
#include<math.h>

int main()
{
    int num;

    printf("Qual numero?\n");
    scanf("%d", &num);

    if(num & 0x01)
    {
        printf("Impar.");
    }
    else
    {
        printf("Par.");
    }
}
