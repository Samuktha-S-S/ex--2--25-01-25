#include<stdio.h>
int main()
{
  char alpha;
  printf("enter a character");
  scanf("%c",&alpha);
  printf("%d",alpha);
  if(('a'<= alpha)&&('z'>=alpha))
   {
    printf("this is alphabet");
   }
   else if('0'<=alpha<='9')
  {
   printf("this is a digit");
  }
  else
  {
  printf("this a spl char");
  }
  return 0;
}
