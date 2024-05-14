#include<stdio.h>
int main(){
    int start,end;
    printf("Enter the range that you want to find the prime numbers:");
    scanf("%d %d",&start,&end);
    while(start<=end){
      int count=0;
      if(start==1) start++;
    for(int i=2;i<start;i++){
        if(start%i==0){ 
        count++;
        break;   
    }
  }
    if(count==0) printf("%d ",start);
    start++;
  }
    
 return 0;
}
