#include<stdio.h>
int main(){
    int i,j,n,num=1;
    printf("Enter N:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        num=i;
       for(j=n-i;j>=1;j--){ // For Spaces
            printf(" ");
      }
      for(j=1;j<=i;j++){ // For Left Section
        printf("%d",num);
        num--;
      }
      num++;
      for(j=1;j<=i-1;j++){   //For Right Sectiom
        num++;
        printf("%d",num);
 

      }
    printf("\n");
    }   
}