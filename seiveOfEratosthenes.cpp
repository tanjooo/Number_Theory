#include<stdio.h>
#include<string.h>
void Sieve(int n){
    int prime[n+2];
    memset(prime,0,sizeof(prime));
    for(int i=2;i*i<=n;i++){
      if(prime[i]==0){
       for(int j=i*i;j<=n;j+=i){
        prime[j]=1;
       }  
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0) printf("%d ",i);   
    }
}
int main(){
    int n,check;
    scanf("%d",&n);
    Sieve(n);
    return 0;
}
