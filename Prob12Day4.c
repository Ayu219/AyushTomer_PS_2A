#include<stdio.h>
#include<stdlib.h>
int main(){
    int x,y,z,n;
    int d1,d2;
    scanf("%d",&n);
    while(n){
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);

    d1=abs(z-x);
    d2=abs(z-y);
    if(d1>d2){
        printf("Cat B\n");
    }
    else if (d2>d1) {
        printf("Cat A\n");
    }
    else{
        printf("Mouse C\n");
    }
n--;    
}

}
