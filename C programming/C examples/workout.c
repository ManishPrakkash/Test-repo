/*#include<stdio.h>

int main()
{
int n1,n2,n3;
printf("Enter three numbers to  find maximum:");
scanf("%d %d %d",&n1,&n2,&n3);
if((n1>n2)&&(n1>n3)){
    printf("The max value is:%d",n1);
}
else if(n2>n3){
    printf("Max value is:%d",n2);
}
else{
    printf("Max value is:%d",n3);
}
return 0;
}


2 nd odd even 

// Online C compiler to run C program online
#include <stdio.h>

int main(){
    int num;
    printf("Enter a number to find ODD or EVEN:");
    scanf("%d",&num);
    if(num%2==0){
        printf("Its EVEN");
    }
    else{
        printf("Its ODD");
    }
    return 0;
}

3rd area of rectangle
4// Online C compiler to run C program online
#include <stdio.h>

int main(){
    int len,bred,area;
    
    printf("Enter length of  rectangle:");
    scanf("%d",&len);
    printf("Enter breadth of rectangle:");
     scanf("%d",&bred);
    area=len*bred;
    printf("Area of rectangle:%d",area);
    return 0;
}

4th c to f

// Online C compiler to run C program online
#include <stdio.h>

int main(){
    float cel,fah;
    
    printf("Enter celsius:");
    scanf("%f",&cel);
    fah=((9/5)*cel+32);
    printf("Fahrenheit:%.1f C",fah);
    return 0;
}

5th avg of 10
// Online C compiler to run C program online
#include <stdio.h>

int main(){
    int i,num=0,val;
    for(i=1;i<=10;i++){
        printf("Enter TEN numbers(Avg):");
        scanf("%d",&num);
        val+=num;
    }
    printf("The average of TEN numbers:%d",val/10);
    return 0;


    6th sum of even num 1-10

    #include <stdio.h>

int main(){
    int sum=0,i;
    for(i=0;i<=10;i++){
        if(i%2==0)
        {
        sum+=i;
        }
    }
    printf("Sum of EVEN numbers from 1 to 10:%d",sum);
    return 0;
}
}

7th palindrome 
#include <stdio.h>

int main(){
    int i,num=0,val;
    for(i=1;i<=10;i++){
        printf("Enter TEN numbers(Avg):");
        scanf("%d",&num);
        val+=num;
    }
    printf("The average of TEN numbers:%d",val/10);
    return 0;

    8th sum of digits
#include <stdio.h>

int main()
{
    int num,sum=0,rem;
    printf("Enter the digits to find sum:");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sum+=rem;
        num/=10;
         }
         printf("Sum of digits is:%d",sum);

    return 0;
}*/
