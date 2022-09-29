#include<stdio.h>
#include<stdlib.h>
int perfect(int);
int main(){
    int i,sum=0,num,j,range;
    scanf("%d",&range);
    for(i=1;i<=range;i++){
        sum=perfect(i);
    if(sum==i){
        printf("%d Your Number is Perfect Number\n",i);
    }
}
return 0;
}
int perfect(int x){
    int i,sum=0,j;
        for(j=1;j<x;j++){
            if(x%j==0){
            sum=sum+j;}}
         return sum;   
}