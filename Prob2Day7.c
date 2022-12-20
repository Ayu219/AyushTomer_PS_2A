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
int rev(char arr[],char rra[]){
    int i;
    int count=0;
    int x;
    x=len(arr);
    for (i=0;arr[i]!='\0';i++){
        rra[x-1]=arr[i];
        x--;}
}
int main(){
    int i,n,x;
    char arr[100];
    char rra[100];
    printf("Enter The String:\n");
    gets(arr);
    rev(arr,rra);
    puts(rra);
    return 0;
}