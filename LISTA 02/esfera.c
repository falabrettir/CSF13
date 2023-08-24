#include<stdio.h>
#include<math.h>

int main()
{
printf("Qual o raio da esfera cujo volume voce quer calcular?\n");
int raio;
scanf("%d", &raio);
float volume = M_PI * raio * raio * raio * 4/3;
printf("O volume eh %f\n", volume);
return 0;

}
