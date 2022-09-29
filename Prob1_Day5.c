#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a;
    int i,n,mi=0;
    printf("Enter N:");
    scanf("%d",&n);
    a=(int *)calloc(n,sizeof(n));
    for(i=0;i<n;i++){
            scanf("%d",a+i);
      }
    mi=*a;
    for(i=0;i<n;i++){
        if(*(a+i)<mi){
            mi=*(a+i);
        }}
    printf("%d",mi);    
    
    
    
    
return 0;
}