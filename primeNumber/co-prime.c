#include<stdio.h>
int main(){
    int num1,num2,count=0,min;
    printf("Enter any two positive number: ");
    scanf("%d %d",&num1,&num2);
   
   min=num1<num2?num1:num2;
   for(int i=2;i<min;i++){
    if(num1%i==0 && num2%i==0){
        count++;
        break;
    }
   }
   if(count==0) printf("%d and %d are co-prime",num1,num2);
   else printf("%d and %d are not co-prime",num1,num2);
    return 0;
}
