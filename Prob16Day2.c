#include<stdio.h>
int min(int,int);
void main(){
    int i,j,k,n,m,value;
    printf("Enter n:");
    scanf("%d",&m);
    n=(2*m)-2;
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            value=m-min(min(i,j),min(n-i,n-j));
            printf("%d",value);
              

        }
        printf("\n");

    }

}
int min(int a,int b){


    return a<b?a:b; 
}