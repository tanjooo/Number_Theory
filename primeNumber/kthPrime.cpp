#include<iostream>
#include<vector>
#include<cstring>
using namespace std;   
void Sieve(int n,int k){
   vector<int>v;
 int prime[90000002];
   memset(prime,0,sizeof(prime));
    for(int i=2;i*i<=n;i++){
       if(prime[i]==0){
        for(int j=i*i;j<=n;j+=i){
            prime[j]=1;
        }
       }
    }
  for(int i=2;i<=n;i++){
    if(prime[i]==0) v.push_back(i);
  } 
  cout<<v[k-1];
}
int main(){
    int n,k;
   cin>>n>>k;  
    Sieve(n,k);
    return 0;
}
