#include<stdio.h>
int prime(int num){
    if(num<=2) return 1;
    for(int i=2;i<num;i++){
        if(num%i==0) 
        return 0;
    }
    return 1;
}
int semiprime(int num){
    int temp=num;
    for(int i=2;i<=num;i++){
      if(prime(i)){
        if(num%i==0){
        temp=num/i;
     if( prime(temp))
        return 1;
     else return 0;
    }
      }
}
}
int main(){
    int num;
    scanf("%d",&num);
    int output=semiprime(num);
    printf("%d",output);
    return 0;
}
