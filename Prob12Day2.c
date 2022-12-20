#include<stdio.h>
void main(){
    int i,j,k,n;
    printf("Enter N:\n");
    scanf("%d",&n);
    /*for ( i = n; i >= 1; i--)
    {
        for (j =1; j<= i; j++)
        {
            printf("%d",j);
        }
        for (k=n;k>=j;k--)
        {
            printf(" ");
        }
        for (k=i;k<n-1;k++)
        {
        printf(" ");
        }
        for(j=j-1;j>=1;j--){
            if(j==n){
                j=n-1;
                printf("%d",j);
            }
            else
            printf("%d",j);
        }
        printf("\n");
        }
        */
       for(i=1;i<=n;i++){
        for(j=1;j<=2*n-1;j++){
            if(j<=n+1-i||j>=n-1+i){
                if(j<=n){
                    printf("%d ",j);
                }
                else
                    printf("%d ",(2*n)-j);
            }
            else
                printf("  ");
        }
        printf("\n");
       }
        
        
        
    }
    
    

