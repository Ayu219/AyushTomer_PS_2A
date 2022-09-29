#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,k,n,j,counter=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        counter=i;
       for(j=1;j<=n-i;j++){
            printf(" ");
      }
        for(k=1;k<=i;k++){
            printf("%d ",counter);
            counter++;
        }
    printf("\n");
    }
return 0;
}
