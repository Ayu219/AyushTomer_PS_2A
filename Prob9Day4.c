#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main(){
    int *a;
    int *b;
    int *c;
    int n,m,i,x,found=0,j,temp=1,mx,p,q,t=0,gcd;
    printf("Enter First Number");
    scanf("%d",&p);
    printf("Enter Second Number");
    scanf("%d",&q);

    a=(int *)calloc(p,sizeof(p));
    for(i=1;i<=p;i++){
        if(p%i==0){
            *(a+t)=i;
            t++;
        }}
    t=0;
    b=(int *)calloc(q,sizeof(q));
    for(i=1;i<=q;i++){
        if(q%i==0){
            *(b+t)=i;
            t++;
        }}
    x=p+q;
    c=(int*)calloc(x,sizeof(x));
for(i=0;i<q;i++){
        found=0;
        for(j=0;j<p;j++){
            if(*(b+i)==*(a+j)){
                found++;
            }}
        if(found>0){
            *(c+temp)=*(b+i);
            temp++;
        }

    }
mx=*c;
     for(i=0;i<x;i++){
        if(*(c+i)>mx){
            mx=*(c+i);
        }}

printf("%d HCF:\n ",mx);

gcd=(p*q)/mx;
printf("%d LCM:",gcd);
}
