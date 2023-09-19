#include<stdio.h>
int testaTipoChar(char c)
{
    if(c == 'A' || c == 'E' || c == 'I' || c =='O' || c =='U')
    {
        return 1;
    }
    if(c =='a' || c =='e' || c == 'i' || c == 'o' || c == 'u')
    {
        return 2;
    }
    if(c > 'A' && c <= 'Z')
    {
        return 3;
    }
    if(c > 'a' && c <= 'z')
    {
        return 4;
    }
    if(c >= '0' && c <= '9')
    {
        return 5;
    }
    return 0;



}
int main()
{
    char c;
    scanf("%c", &c);
    printf("%d", testaTipoChar(c));
    return 0;
}
