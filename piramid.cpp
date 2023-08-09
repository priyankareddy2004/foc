#include<stdio.h>
int main(){
    int c, i, j;
    printf("Enter corner value ");
    scanf("%d", &c);
    for(i = 0; i < c; i++){
        for(j = 0; j < c; j++){
            if(i==0 || i==c-1 || j==0 || j==c-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
