#include<stdio.h>
#include<math.h>
int powe(int u,int w){
    if(w==0)
    return 1;
    else
    return (u*powe(u,w-1));
}

void main(){
    int i,n,arm=1,a,x,cout=0,num,y,range,z;
    scanf("%d",&range);
   for(i=1;i<=range;i++){
        y=i;
        x=i;
        n=i;
        cout=0;
        arm=0;

    while(y!=0){
        y=y/10;
        cout++;
        }


    while(n>0){
        a=n%10;
        z=powe(a,cout);
        arm=arm+z;
        n=n/10;
    }
    if(arm==x){
        printf("NO %d IS ARM\n",x);
    }
       
}}