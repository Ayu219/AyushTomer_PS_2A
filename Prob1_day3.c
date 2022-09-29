#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,fact=1,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=i*fact;
        sum=sum+fact;
       }
    printf("%d",sum);  

return 0;
}