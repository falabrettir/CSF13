#include<stdio.h>
#include<string.h>
#define BUFLEN 2048
#define OFFSET_R_L ('R' - 'L')
int ehLetra(char c)
{
    return((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'));
}
void stling(char* string, char*cebola)
{
    int i, pos_cebola = 0;
    int size = strlen(string);
    for(i=0; i<size; i++)
    {
        if((string[i]== 'R' || string[i] == 'r')&&ehLetra(string[i+1]))
        {
            if(i==0|| string[i-1]!= 'R' && string[i-1]!= 'r')
            {
                cebola[pos_cebola++]= string[i] - OFFSET_R_L;
            }
        }
        else
        {
            cebola[pos_cebola++] = string[i];
        }
    }
    cebola[pos_cebola] = 0;
}
int main()
{
    char string[BUFLEN];
    char cebola[BUFLEN];
    fgets(string, BUFLEN, stdin);
    string [strlen (string)-1] = 0;

    stling(string, cebola);
    printf("%s" , cebola);


    return 0;
}

