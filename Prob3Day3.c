//1+ x + x2/2! + x3/3! + x4/4!......
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int i,fact=1,n,x;
    float sum=0;
    printf("ENter N:");
    scanf("%d",&n);
    printf("Enter X:");
    scanf("%d",&x);
    for(i=1;i<n;i++){
        fact=fact*i;
        sum=sum+(pow(x,i)/fact);
    }
    printf("%f",sum+1);


    
return 0;
}
