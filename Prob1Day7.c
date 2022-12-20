#include<stdio.h>
#include<stdlib.h>
int len(char arr[]){
    int i;
    int count=0;
    for (i=0;arr[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    int i,n,x;
    char arr[100];
    printf("Enter The String:\n");
    gets(arr);
    x=len(arr);
    printf("Length is : %d",x);
return 0;
}