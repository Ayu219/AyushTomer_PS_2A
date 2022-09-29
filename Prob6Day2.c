#include<stdio.h>
void main(){
    int i,j,k,n,m;
	int temp=2;
    printf("Enter N:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n-i;j>=1;j--){
            printf(" ");
        }
        for(k=1;k<=(2*i)-1;k++){
			if(n-i+k<=n){
				temp=i+k-1;
            	printf("%d",temp);
				

}
			else{
				temp=temp-1;
				printf("%d",temp);
				
				}
				}
        printf("\n");

    }
}

