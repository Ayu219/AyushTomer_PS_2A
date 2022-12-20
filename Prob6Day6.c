#include<stdio.h>
#include<stdlib.h>
int count[26]={0};
int ana(char s[],char d[]){
    int i=0;
    int res=0;
    for(i=0;s[i]!='\0';i++){
        count[s[i]-97]++;
    }
    for(i=0;d[i]!='\0';i++){
        count[d[i]-97]--;
    }
    for(i=0;i<26;i++){
        res+=count[i]>0?count[i]:-count[i];
    }
    return res;
}
int main(){
    int i;
    int result;
    char s1[100];
    char s2[100];
    scanf("%s",&s1);
    scanf("%s",&s2);
    //fgets(s1,100,stdin);
    //fgets(s2,100,stdin);
    result=ana(s1,s2);
    printf("%d",result);
    
return 0;
}