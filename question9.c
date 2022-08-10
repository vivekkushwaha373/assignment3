#include<stdio.h>
int main()
{
 int a,b,c,d,e;
 printf("enter the first number : ");
 scanf("%d",&a);
printf("enter the second number : ");
scanf("%d",&b);
printf("enter the third number : ");
scanf("%d",&c);
d=a>b?a:b;
e=b>c?b:c;
d>=e?printf("%d is greatest",d):printf("%d is greatest",e);
return 0;
}