//max 0f 3 num
#include <stdio.h>

int main(){
    int n1,n2,n3;
    printf("Enter the num1:");
    scanf("%d",&n1);
     printf("Enter the num2:");
    scanf("%d",&n2);
     printf("Enter the num3:");
    scanf("%d",&n3);

    if(n1>n2&&n1>n3){
        printf("The highest value is %d.",n1);
    }
    else if(n2>n3){
        printf("The highest value is %d.",n2);
    }
    else{
        printf("The highest value is %d.",n3);
    }
    return 0;
}