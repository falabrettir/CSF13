#include<stdio.h>


int ehProgressaoAritmetica(int n1, int n2, int n3, int n4)
{
    if((n2 - n1 == n3 - n2) && (n3 - n2 == n4 - n3))
        return n2-n1;
    else
        return 0;
}
int main()
{
    int n1, n2, n3, n4, x;
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    x = ehProgressaoAritmetica(n1, n2, n3, n4);
    printf("%d", x);
}
