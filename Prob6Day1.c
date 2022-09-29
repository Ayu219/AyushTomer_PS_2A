#include <stdio.h>
int check(int,int,int);
int main(){
    int side1,side2,side3;
    printf("Enter First Side");
    scanf("%d",&side1);
    printf("Enter Second Side");
    scanf("%d",&side2);
    printf("Enter Third Side");
    scanf("%d",&side3);
    check(side1,side2,side3);



}
int check(int x, int y, int z){
    if (x==y || y==z ||z==x){
        if(x==y && y==z &&z==x){
            return printf("Triangle is Equilateral Triangle");
        }
        else
            return printf("Triangle is Isosceles Triangle");

    }
    else 
         return printf("Triangle is Scalene");
}
