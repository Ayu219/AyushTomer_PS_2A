/*
1
23
345
4567
*/


#include<stdio.h>
#include<stdlib.h>
/*
int main(){
    int n,i,j;
    printf("Enter N:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");


    }
}

int main(){
    int *p;
    int i,j,n,count=0;
    printf("Enter N:");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(n));
    for(i=0;i<n;i++){
        *(p+i)=i+1;}
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("%d",*(p+j+count));
            
            }
            count++;
            printf("\n");
            }
}
*/

int main(){
    int n,row,column;
    printf("Enter N:");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(column=1;column<=row;column++){
            printf("%d",row+column-1);}
        printf("\n");

    }
}