  #include<stdio.h>
  #include<stdlib.h>
  int main(){
    int i,n,lsum=0,rsum=0,x;
    int *a;
    scanf("%d",&n);
    a=(int *)calloc(n,sizeof(n));
    for(i=0;i<n;i++){
            scanf("%d",a+i);
      }
    for(i=0;i<n;i++){
            if(i<((int)n/2)){
            lsum=lsum+*(a+i);}
            else
            rsum=rsum+*(a+i);
      } 
    x=lsum*rsum;
    printf("%d",x);

    
  return 0;
  }