#include<stdio.h>
#include<math.h>
void main(){
    int num,sum=0,rev,n;
    scanf("%d",&num);
    n=num;

    while(num!=0){
        rev=num%10;
        sum=(sum*10)+rev;
        num=num/10;
    }
    if(n==sum)
        printf("NO IS PAlIN");
    else 
        printf("NO IS NOT PALIN");
}