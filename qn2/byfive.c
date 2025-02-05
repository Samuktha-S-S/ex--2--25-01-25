#include<stdio.h>
int main()
{
  int a,b,sum;
  printf("a,b");
  scanf("%d%d",&a,&b);
  sum=a+b;
  if(sum%5==0)
  {
    printf("the number is divisible by 5");
  
  }
  else
  {
   printf("verify your number");
  }
  
  return 0;
}
