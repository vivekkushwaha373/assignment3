#include<stdio.h>
int main()
{   
    int a;
    printf("enter a number : ");
    scanf("%d",&a);
    if(a%7==0 || a%3==0)
    printf("number is divisible by 7 or 3");
    else
    printf("number is not divisible by 7 or 3");
    return 0;
}