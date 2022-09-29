#include<stdio.h>
#include<math.h>
int facto(int);
void main(){
    int i,n,str=1,a,x,cout=0,num,y,range,z;
    scanf("%d",&range);
   for(i=1;i<=range;i++){
        y=i;
        x=i;
        n=i;
        cout=0;
        str=0;

    while(y!=0){
        y=y/10;
        cout++;
        }


    while(n>0){
        a=n%10;
        z=facto(a);
        str=str+z;
        n=n/10;
    }
    if(str==x){
        printf("NO %d IS Strong Number\n",x);
    }
       
}
}
int facto(int x){
    int i,fact=1;
    for(i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
