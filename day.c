#include<stdio.h>
int  isleap(int y){
    return (y % 400 == 0) || (y % 100 != 0 && y % 4 == 0);}
int daysm(y,m, k = 1){
    if (m == k)
        return 0;
    else if (k == 2){
        if isleap(y){
            return 29 + daysm(y,m,k + 1);}
        return 28 + daysm(y,m,k + 1);}
    else:
        if (k & 1 and k < 8) or k == 8 :
            return 31 + daysm(y,m,k + 1)
        elif {(k & 1  == 0 and k > 8):
            return 31 + daysm(y,m,k + 1)
        return 30 + daysm(y,m,k + 1);}}

int daysy(int y,int k){
    int k = 1500;
    if (y > k){
        if isleap(k)
            return 366 + daysy(y,k + 1);
        else
            return 365 + daysy(y,k + 1);
    return 0;}
int main(){
    int l[10];
    int d,m,y,noofdayst,noofdaysw;
 l[10] = ["Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"];
printf("Enter Day:");
scanf("%d",&d);
printf("Enter Month:");
scanf("%d",&m);
printf("Enter Year:");
scanf("%d",&y);
noofdayst=(daysy(y) + daysm(y,m) + d - 1);
noofdaysw=noofdayst%7;

print(l[noofdaysw]);
}