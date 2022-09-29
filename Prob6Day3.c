//1- x2/2! + x4/4! - x6/6!........

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int fact(int);
int main(){
    int i,n,x,temp=1;
    float sum=0;
    printf("ENter N:");
    scanf("%d",&n);
    printf("Enter X:");
    scanf("%d",&x);
    for(i=2;i<2*n;i++){
        if(temp%2==0){
        sum=sum+(pow(x,i)/fact(i));
        temp++;
        i++;
        }
        else{
        sum=sum-(pow(x,i)/fact(i));
        temp++;
        i++;
        }
    }
    printf("%f",sum+1);
return 0;
}
int fact(int x){
    int i,fact=1;
     for(i=1;i<=x;i++){
        fact=fact*i;

     }
     return fact;
}


