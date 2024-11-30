//digit count
#include <stdio.h>
int main(){
  int num,count=0;
  printf("Enter a number:");
  scanf("%d",&num);
  while(num!=0){
    num/=10;
    count++;
  }
  printf("No of digits entered:%d",count);
  return 0;
}