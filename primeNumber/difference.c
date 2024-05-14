#include<stdio.h>
int counting(int arr[],int num){
    int compNum=0;
    for(int i=0;i<num;i++){
     for(int j=2;j<arr[i];j++){
         if(arr[i]==2) break;
           if(arr[i]%j==0){
            compNum++;
            break;
     }
      }
  }
    return compNum;    
}
 
int main(){
    int num;
    printf("Enter how many even numbers you want to take: ");
    scanf("%d",&num);
      int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
     int compositeNumbers=counting(arr,num);
      int primeNumbers=num-compositeNumbers;

    int compositeNum[compositeNumbers];
    int primeNum[primeNumbers];
 //Finding Composite Numbers 
       int count1=0;
       for(int i=0;i<num;i++){
       int iscompo=0;
      for(int j=2;j<arr[i];j++){
        if(arr[i]==2) {
          count1++;
          break;
        }
         if(arr[i]%j==0){
          compositeNum[i-count1]=arr[i];
          iscompo=1;
          break;
         }
      }
       if(iscompo==0) count1++;
       
     }
// Finding Prime Numbers
           int count2=0;
       for(int i=0;i<num;i++){
        int isPrime=1;
       for(int j=2;j<arr[i];j++){
        if(arr[i]==2) {
           primeNum[i-count2]=arr[i];
           break;
        }
       if(arr[i]%j==0){
             count2++;
             isPrime=0;
            break;
          }
       }
       if(isPrime==1) primeNum[i-count2]=arr[i];
     }
//Printing Composite and Prime Numbers   
      for(int i=0;i<compositeNumbers;i++){
        printf("%d ",compositeNum[i]);
      }
      printf("\n");
           for(int i=0;i<primeNumbers;i++){
        printf("%d ",primeNum[i]);
      }
 
//sorting
         for(int i=0;i<compositeNumbers-1;i++){
    for(int j=0;j<compositeNumbers-1-i;j++){
        if(compositeNum[j+1]<compositeNum[j]){
            int temp=compositeNum[j+1];
            compositeNum[j+1]=compositeNum[j];
            compositeNum[j]=temp;
        }
    }
   }
     int start=0,end=compositeNumbers-1,mid;
     if(compositeNumbers%2==0)
      mid =((start+end)/2)+1;

      else    mid =((start+end)/2);

       int median =compositeNum[mid];
       int maxprime=primeNum[0];

     for(int i=0;i<primeNumbers;i++){
        if(maxprime<primeNum[i]) maxprime=primeNum[i];
     }
     int ans;
     int max= (median>maxprime) ? median : maxprime;
      if(max==median) ans = median-maxprime;
      else ans = maxprime - median;

      printf("Answer is :%d",ans);
      return 0;
}
