//week identifier
#include<stdio.h>
int main(){
int num;
printf("Enter week no between (1-7):");
scanf("%d",&num);
switch(num){
    case 1:
    printf("Monday");
    break;
    case 2:
    printf("Tuesday");
    break;
    case 3:
    printf("Wednesday");
    break;
    case 4:
    printf("Thursday");
    break;
    case 5:
    printf("Friday");
    break;
    case 6:
    printf("saturday");
    break;
    case 7:
    printf("Sunday");
    break;
}
    return 0;
}