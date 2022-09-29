//Write a program to find the sum of the series using the function. a) 1/1!-2/3!+3/5!-4/7!+…
#include<stdio.h>
#include<stdlib.h>
int fact(int x){
    int i,fact=1;
     for(i=1;i<=x;i++){
        fact=fact*i;

     }
     return fact;
}
int main(){
    int i,j,n;
    int temp=2;
    float sum=0;
    scanf("%d",&n);
    for(i=3;i<=((2*n)-1);i++){
        if(temp%2==0){

        sum=sum-(((float)temp)/fact(i));
        i++;
        temp++;
    }
        else{ 
        sum=sum+(((float)temp)/fact(i));
        i++;
        temp++;
    }
    }
    printf("%f",sum+1);
    
    
return 0;
}