//triangle checker
#include<stdio.h>

int main(){
    int l1,l2,l3;
    printf("Enter the lengh of side 1:");
    scanf("%d",&l1);
    printf("Enter the lengh of side 2:");
    scanf("%d",&l2);
    printf("Enter the lengh of side 3:");
    scanf("%d",&l3);

    if(l1+l2>l3 ||l2+l3>l1 ||l3+l1>l2){
        printf("It forms a triangle");

    }
    else{
        printf("It doesn't forms a triangle");
    }
    return 0;
}