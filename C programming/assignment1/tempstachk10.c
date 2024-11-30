//temp status calculation
#include<stdio.h>

int main(){
    float temp;
    printf("What's the temperature:");
    scanf("%f",&temp);
    if(temp<0){
        printf("Freezing weather");
    }
    else if(temp>=0 && temp<=15){
        printf("Cold weather");
    }
    else if(temp>=16 && temp<=30){
        printf("Warm weather");
    }
    else{
        printf("Hot weather");
    }
    return 0;
}
