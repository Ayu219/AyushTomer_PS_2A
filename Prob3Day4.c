#include<stdio.h>
int fact(int x);
void main(){
    int x,n,i;
    scanf("%d",&n);
    x=fact(n);
    printf("%d",x);
}
int fact(int x){
    if (x==1)
        return 1;
    else
        return (x*fact(x-1));
}