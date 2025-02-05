#include<stdio.h>
int main()
{
 int mark;
 printf("enter marks");
 scanf("%d",&mark);
 if(mark>=90)
 {
 printf("grade A");
 }
 else if(mark>=80)
 {
 printf("grade B");
 }
 else if(mark>=70)
 {
 printf("grade C");
 }
 else if(mark>=60)
 {
 printf("grade D");
 }
 else
 {
 printf("grade F");
 }
 return 0;
}
