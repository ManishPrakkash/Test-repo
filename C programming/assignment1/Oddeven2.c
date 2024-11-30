//OddorEven
#include<stdio.h>

int main(){
    int num;
    printf("Enter a value:");
    scanf("%d",&num);

    if(num&1){
        printf("The entered value is Odd");
    }
    else{
        printf("The entered value is Even");
    }
}