#include<stdio.h>
#include<math.h>
int check(char);
void  main(){
    int bs,hra,da,allow,pf,total;
    char grade;
    printf("Enter Basic Salary:");
    scanf("%d",&bs);
    printf("Enter Char:");
    scanf("%",&grade);
    hra=0.2*bs;
    da=0.5*bs;
    allow=check(grade);
    pf=0.11*bs;
    total=round(bs+hra+da+allow-pf);
    printf("%d",total);


}
int check(char a){
    if(a=='A'){
        return 1700;
    }
    else if(a=='B'){
        return 1500;
    }
    else if(a=='C'){
        return 1300;
    }
}
