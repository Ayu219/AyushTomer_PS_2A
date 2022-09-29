#include<stdio.h>
void main(){
    int xcord,ycord;
    printf("ENTER YOUR X CORD:\n");
    scanf("%d",&xcord);
    printf("ENTER YOUR Y CORD:\n");
    scanf("%d",&ycord);
    if(xcord>0 && ycord>0){
        printf("Your Point Lies In First QuadRant");
    }
    else if(xcord<0 && ycord>0){
        printf("Your Point Lies In Second  QuadRant");
    }
    else if(xcord<0 && ycord<0){
        printf("Your Point Lies In Third QuadRant");
    }
    else if(xcord>0 && ycord<0){
        printf("Your Point Lies In Fourth QuadRant");

    }
    else 
        printf("Your Point lies on origin");


}