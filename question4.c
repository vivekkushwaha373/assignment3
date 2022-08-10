#include<stdio.h>
int main()
{
 int a;
 scanf("%d",&a);
 if((a&1)==0)
 printf("given number is even");
 else
 printf("given number is odd");
 return 0;
}