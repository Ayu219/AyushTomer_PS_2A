#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,k,n;
    int temp1=1;
    int temp2=2;
    int temp3=3;
    float sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+(temp1*temp2*temp3);
        temp1++;
        temp2++;
        temp3++;
    }
    printf("%f",sum);
return 0;
}