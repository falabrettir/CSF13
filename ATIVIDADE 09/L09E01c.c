#include<stdio.h>
int main(){
    int i, j, k;

    for(i=1;i<=6;i++){
        for(j=i;j<=6;j++){
            for(k=j;k<=6;k++){
                printf("(%d, %d, %d) ", i, j, k);
            }
        }
        printf("\n");
    }
    return 0;
}
