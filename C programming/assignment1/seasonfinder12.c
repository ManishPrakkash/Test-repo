//identify season by month
#include<stdio.h>
int main(){
    int month;
    printf("Enter the month by(1-12):");
    scanf("%d",&month);
    if(month>=3 && month<=5){
      printf("Spring");
    }
  else if(month>=3 && month<=5){
    printf("Spring");
  }
  else if(month>=6 && month<=8){
    printf("Summer");
  }
  else if(month>=9 && month<=11){
    printf("Autumn");
  }
  else{
    printf("winter");
  }
    return 0;
}