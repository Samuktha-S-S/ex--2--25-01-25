#include<stdio.h>
int main()
{
 int number;
 printf("enter number");
 scanf("%d",&number);
 if(number>0)
 {
   printf("the number %d is postive",number);
 
 
 }
 else if(number<0)
 {
   printf("the number %d is negative",number);
 }
 else
 {
 printf("the number is %d is zero",number);
 }
 return 0;
}  
 
