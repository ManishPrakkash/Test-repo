#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,value;
printf("Enter the value for a:");
scanf("%d",&a);
printf("Enter the value for b:");
scanf("%d",&b);
printf("Enter the value for c:");
scanf("%d",&c);

value=(pow(b,2)-4*a*c);

if(value>0){
    printf("It is real");
}
else if(value<0){
    printf("It is imaginary");
}
else{
    printf("It is equal");
}
}