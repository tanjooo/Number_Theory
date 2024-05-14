#include<stdio.h>
int  ksmooth(int k,int n){
    
     if(n<=k){
       for(int i=1;i<=k;i++){
        if(n%i==0) 
           return 1;
       } 
     } 
     else{
     for(int i=2;i<=k;i++){
        while(n%i==0){
          n=n/i;
        }
  }
 }
    if(n<=k) return 1;
    else return 0;
}
int main(){
    int k,n;
    scanf("%d %d",&k,&n);
    int ans= ksmooth(k,n);
    printf("%d ",ans);
    return 0;
}
