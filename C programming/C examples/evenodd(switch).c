#include<stdio.h>

int main(){
  int con,num,count=0;
  printf("Enter a number:");
  scanf("%d",&num);
   con=(num%2==0);
  if(con==0)
  {
  count=1;
  }
  else{
    count=2;
  }
  switch(con){
    case 1:
    printf("The number is even:");
    break;
    case 2:
    printf("The number is odd:");
     break;
  }
  return 0;
}