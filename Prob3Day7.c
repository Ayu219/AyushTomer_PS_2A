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
int palin(char arr[]){
    int i;
    int count=0;
    int x;
    x=len(arr);
    printf("LEntght is %d",x);
    for (i=0;i<(x/2);i++){
        if(arr[i]!=arr[x-1]){
            printf("String Is Not Palindrome");
            return 0;
        }
        x--;
        }
    printf("String Is Palindrome");}
int main(){
    int i,n,x;
    char arr[100];
    printf("Enter The String:\n");
    gets(arr);
    palin(arr);
    return 0;
}