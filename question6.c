#include<stdio.h>
int main()
{
 int a,b;
 printf("enter the first number: ");
 scanf("%d",&a);
 printf("enter the second number: ");
 scanf("%d",&b);
 if(a>b)
 printf("%d is greater",a);
 if(a==b)
 printf("both of the numbers are same that is %d",a);
 else
 printf("%d is greater",b);
 return 0;
}