#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter N:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c",'A'+(i+j-2)); //printf("%c",'A'+(i+j-1));
                }
    printf("\n");
    }



}

