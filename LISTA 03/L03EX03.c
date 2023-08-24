//Lista 03 Exercicio 03


#include<stdio.h>
int main()
{
    int z1, z2, z3;
    printf("Quais tres numeros deseja comparar?\n");
    scanf("%d %d %d", &z1, &z2, &z3);

    if(z1 > z2 && z1 > z3)
    {
        printf("%d\n", z1);
    }
    else if(z2 > z1 && z2 > z3)
    {
        printf("%d\n", z2);
    }
    else
    {
        printf("%d\n", z3);
    }
    return 0;
}
