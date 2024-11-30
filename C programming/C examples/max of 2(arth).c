// max of 2 num using bitwise
#include <stdio.h>

int main() {
    int num1,num2;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
     scanf("%d",&num2);
   if(num1%num2==num1){
       printf("The greatest number is:%d",num2);
   }
   else{
       printf("the greatest number is:%d",num1);
   }
    return 0;
}