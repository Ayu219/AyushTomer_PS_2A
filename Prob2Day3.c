// a) 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,k,fact=1,n;
    float sum=1;
    printf("Enter N:");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        fact=fact*i;
        sum=sum+fact;
    }
    printf("%f",sum);
    

    
return 0;
}