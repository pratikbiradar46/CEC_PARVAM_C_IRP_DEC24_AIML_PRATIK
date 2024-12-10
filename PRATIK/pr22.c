//get the umber from user
//if the number greater than 100 mult*5
//if the number greater than 500 division /2
//if the number  lesser than 100 modules %10
//based on the result square e.g 500*5=2500*2500=6250000

#include<stdio.h>
int main(){
    int num;
     printf("please enter a number");
     scanf("%d",&num);
     int result;
     if (num>100 )
     result =num*5;
 else if(num>500)
     result =num/2;
     else if(num<100)
    result=num%10;
    else
    printf("invalid number");
    result=result*2;
    printf("%d",result);

 
    return 0;
}