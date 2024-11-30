//grade calculator
#include<stdio.h>
int main(){
    int mark;
    printf("Enter your mark:");
    scanf("%d",&mark);
    if(mark>=90 && mark<=100){
        printf("GRADE:A+");
    }
    else if(mark>=80 && mark<=89){
        printf("GRADE:A");
    }
    else if(mark>=70 && mark<=79){
        printf("GRADE:B+");
    }
     else if(mark>=60 && mark<=69){
        printf("GRADE:B");
    }
     else if(mark>=50 && mark<=59){
        printf("GRADE:C");
    }
     else if(mark<50){
        printf("FAIL");
    }
    return 0;
}