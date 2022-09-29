#include<stdio.h>
#include<stdlib.h>
int pat(int);
int main(){
    int i,n,x;
    scanf("%d",&n);
    x=pat(n);

return 0;
}
int pat(int a){
    printf("%d ",a);
    if(a<=0 )
        return a;
    pat(a-5);
    printf("%d ",a);
    
}