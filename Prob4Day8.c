#include<stdio.h>
#include<stdlib.h>
int main(){
    long long int num;
    scanf("%llu",&num);
    char str[100];
    fgets(str,100,num);
    puts(str);

    
return 0;
}