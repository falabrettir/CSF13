#include<stdio.h>
int main(){
    int i, j;
    for(i=1; i<=6; i++){
        for(j=1; j<=6; j++){
            printf("(%d, %d)", i , j);
        }
        printf("\n");
    }
    return 0;
}
