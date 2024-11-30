//electricity bill
#include<stdio.h>

int main(){
    float unit;
    printf("Unit consumed:");
    scanf("%f",&unit);
    if(unit<=100){
        printf("Total amount:%.1f$",unit*1);
    }
    else if(unit>=101 && unit<=200){
        printf("Total amount:%.1f$",unit*1.2);
    }
    else if(unit>=201 && unit<=300){
        printf("Total amount:%.1f$",unit*2);
    }
    else{
        printf("Total amount:%.1f$",unit*2.5);
    }
    return 0;
}
