// you are mental
// you are mad
// you are dumbo
// you are inteligent
// you are physco
// you are crazy
// you are pysch pysch
// you are waste
// you are good boy
// you are bad boy


// A to Z 
// A=1
// a=1

// z or Z = 26
// ANU = 1 + 14 + 21 = 36 =  3+6 = 9
sod = num = 567 // 18 >= 9
while (sod . 9){
    sum = 0;
    while(num > 0)
    rem = num%10
    sum sum + rem; //18 //9 
    num= num
}
// A = a = 1
// B = b = 2
// C = c = 3


#include<stdio.h>
int main(){
   char alphaUpr[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
   char alphaLow[]="abcdefghijklmnopqrstuvwxyz";
   char name[100];
   int sum=0;
   printf("Please Enter your name : \n");
   scanf("%s",&name);
  
    for(int c=0;name[c] != '\0';c++){
           for(int i=0;i<26;i++)
                 if(name[c] == alphaUpr[i] || name[c] == alphaLow[i] ){
                      printf(" %c + ",name[c]);
                    sum += i+1; //sum = sum + i+1

                 }
    }
    printf(" = %d \n",sum);
    return 0;
}
