#include<stdio.h>
#include<stdlib.h>
int powe(int u,int w){
    if(w==0)
    return 1;
    else
    return (u*powe(u,w-1));
}

int main(){
    int i,x,j,y;
    j=3;
    i=5;
    y=powe(j,3);
    x=powe(i,3);
    printf("%d",x+y);
    
return 0;
}
