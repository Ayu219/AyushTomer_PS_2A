#include<stdio.h>
#include<stdlib.h>
int mean(int *,int );
int median(int *,int);
int bsort(int *,int);
int main(){
    int i,n;
    float x;
    int *a;
    printf("Enter Number Of Observation:\n");
    scanf("%d",&n);
    a=(int *)calloc(n,sizeof(n));
    for(i=0;i<n;i++){
            scanf("%d",a+i);
      }
    bsort(a,n);
    
      

    x=median(a,n);
    printf("%f",x);
    
    
return 0;
}
int mean(int *a,int n){
    int i;
    float sum=0;
    for(i=0;i<n;i++){
        sum=sum+*(a+i);
    }
    return ((float)sum/n);
}
int median(int *a,int n){
    int i,x,y;
    float median=0;
    if(n%2==0){
        x=(n/2)-1;
        y=n/2;
        median=0.5*(*(a+x)+*(a+y));
        return median;

    }
    else{
        x=((n+1)/2)-1;
        median=*(a+x);
        return median;
        
    }

}
int bsort(int *a,int n){
     int temp,j,i;
        
        for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(*(a+j)>*(a+j+1)){
            temp=*(a+j);
            *(a+j)=*(a+j+1);
            *(a+j+1)=temp;}}
    }
}
