#include<stdio.h>
int prime(int);
void main(){
    int n,i,j,count=0,no=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        count=prime(i);
 
    if(count==2) {       
        printf("YOUR NUMBER IS PRIME =%d\n",i);
        no++;}
    }
    printf("COUNT=%d",no);
}
int prime(int x){
    int count=0,j;
    for(j=1;j<=x;j++){
        if(x%j==0){
            count++;}
            }
    return count;        


}