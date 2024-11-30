// swap using bitwise
#include <stdio.h>

int main() {
    int num1,num2,flag;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
     scanf("%d",&num2);
     num1=num1^num2;
     num2=num2^num1;
     num1=num1^num2;
     printf("The swapped values are:(%d,%d)",num1,num2);
    return 0;
}