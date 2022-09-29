#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,n,mx;
    int *arr;
    scanf("%d",&n);
    arr=(int *)calloc(n,sizeof(n));
    for(i=0;i<n;i++){
            scanf("%d",arr+i);
      }
    mx=*arr;
    for(i=0;i<n;i++){
        if(mx<*(arr+i)){
            mx=*(arr+i);
        }
    }
    printf("%d",mx);

    
    
return 0;
}