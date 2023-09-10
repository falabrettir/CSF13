#include<stdio.h>
#include<math.h>

int main()

{
    float sal, imp, fx1, fx2,
    fx3, fx4;
    fx1 = 1200.25;
    fx2 = 2300.50;
    fx3 = 3500.75;
    fx4 = 4000.00;

    printf("Qual o rendimento mensal?\n");
    scanf("%f", &sal);

    if(sal <= fx1)
    {
        imp = 0;
    }
    else if(sal <= fx2)
    {
        imp = 0.075*(sal - fx1);
    }
    else if(sal <= fx3)
    {
        imp = 0.15*(sal - fx2) + 0.075*(fx2 - fx1);
    }
    else if(sal <= fx4)
    {
        imp = 0.225*(sal - fx3) + 0.15*(fx3 - fx2) + 0.075*(fx2 - fx1);
    }
    else
    {
        imp = 0.275*(sal - fx4) + 0.225*(fx4 - fx3) + 0.15*(fx3 - fx2) + 0.075*(fx2 - fx1);
    }
    printf("R$%.2f", imp);

}

