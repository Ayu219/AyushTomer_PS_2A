/*
E
DE
CDE
BCDE
ABCDE

69
68 69
67 68 69
66 67 68  69
65 66 67 68 69

*/
#include<stdio.h>
int number(char );
void main(){
    int i,j,n;
    char a;
    printf("Enter starting char:");
    scanf(" %c",&a);
    printf("%d\n",a);
    n=number(a);
    printf("%d\n",n);
    for(i=1;i<=n;i++){
        for(j=n-i+1;j<=n;j++){

            printf("%c",'A'+j-1);
        }
        printf("\n");

    }

    
}
int number(char a){
    int count=0,i;
    for(i=65;i<=a;i++){
        count++;
    }
    return count;


}