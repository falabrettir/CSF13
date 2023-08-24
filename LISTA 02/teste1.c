#include<stdio.h>
int main()
}
int foo = 5 , int bar = 2
float foobar = 8.0;
//Resultado esperado eh 11
printf("%d\n", foo + 3 * bar);
//Resultado esperado eh 16
printf("%d\n", (foo + 3)* bar);
//resultado esperado eh 10/8
printf("%d\n", (foo * bar)/8);
//resultado esperado eh 10/8
printf("%d\n",(foo * bar)/foobar);
//resultado esperado eh 2
printf("%d\n", foo % 3);
//resultado esperado eh 1
printf("%d\n", foo % bar);
//o resultado esperado eh -5 e -5
printf("%d %d\n", foo* -1, -foo);
//o resultado esperado eh 5.1
printf("%f\n", foo+0.1);
//resultado esperado eh 5/4
printf("%d\n", foo/bar*bar);
return 0;
}
