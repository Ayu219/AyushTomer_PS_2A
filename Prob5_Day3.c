//x- x3/3! + x5/5! - x7/7!........ 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int fact(int);
int main(){
    int i,facto=1,n,x,temp=1;
    float sum=0;
    printf("ENter N:");
    scanf("%d",&n);
    printf("Enter X:");
    scanf("%d",&x);
    for(i=1;i<=(2*n)-1;i++){
        if(temp%2==0){
        sum=sum-(pow(x,i)/fact(i));
        temp++;
        i++;
        }
        else{
        sum=sum+(pow(x,i)/fact(i));
        temp++;
        i++;
        }
    }
    printf("%f",sum);
return 0;
}
int fact(int x){
    int i,fact=1;
     for(i=1;i<=x;i++){
        fact=fact*i;

     }
     return fact;
}


