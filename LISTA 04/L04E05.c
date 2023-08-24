//



#include<stdio.h>
#include<math.h>
int main()
{
    int l1, l2, l3;
    printf("Entre o valor dos lados do triangulo.\n");
    scanf("%d %d %d", &l1, &l2, &l3);

    if(l1 < l2+l3 && l1 > abs(l2-l3))
    {
        if(l1 == l2 && l2 == l3)
        {
            printf("Triangulo equilatero.\n");
        }
        else if(l1 == l2 || l2 == l3 || l1 == l3)
        {
            printf("Triangulo isosceles.\n");
        }
        else
        {
            printf("Triangulo escaleno.\n");
        }
    }
    else
    {
        printf("Nao existe.\n");
    }
    return 0;
}
