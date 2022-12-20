#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a;
    int i,n;
    int t1=0,t2=0;
    printf("Enter Range:");
    scanf("%d",&n);
    t2=n-1;
    a=(int *)calloc(n,sizeof(n));
    for(i=1;i<=n;i++){
        if(i%2!=0){
            *(a+t1)=i;
            t1++;}
        else{
            *(a+t2)=i;
            t2--;}}
      printf("Elements Of Array");      
    for(i=0;i<n;i++){
        printf("%d ",*(a+i)); }
return 0;
}