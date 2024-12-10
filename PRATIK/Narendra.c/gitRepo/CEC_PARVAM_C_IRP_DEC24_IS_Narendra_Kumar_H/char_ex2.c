
// to find the traffic light : red , yellow , green


#include<stdio.h>
int main(){
   char colour;
   printf("Enter the traffic light colour:");
   scanf("%c",&colour);
//    if(colour == 'red' ) {
//     printf("please stop");
//    }
//    if( colour == 'yellow') {
//      printf("please slow down");    
//    }
//    if(colour == 'green') {
//       printf("please go");
//    }

   switch(colour){
    case 'red':printf("please stop");break;
    case 'yellow':printf(" please go slow");break;
    case 'green':printf(" please go");break;
   }


//    switch(colour){
//    case 'red':printf("please stop");break;
//    case 'yellow':printf(" please go slow");break;
//    case 'green':printf(" please go");break;
//    } 
   return 0;
}