#include<stdio.h>
int main()
{
int a;
printf("enter month number: ");
scanf("%d",&a);
if(a==1||a==5||a==7||a==8||a==10||a==12)
printf("number of days in the month is 31");
else
{
if(a==3)
printf("number of days in the month is 28");
else
printf("number of days in the month is 30");
}
    return 0;
}