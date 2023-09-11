#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        printf("%c", 'A'+i);
    }
    return 0;
}
