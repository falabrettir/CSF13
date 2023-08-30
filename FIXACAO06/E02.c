#include <stdio.h>
#define N 10
#define X 3
int main ()
{
int i;
for (i = 0; i < N*X; i += X)
printf ("%d\n", i);
return 0;
}
