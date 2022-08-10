#include<stdio.h>
int main()
{   
    int a;
    printf("enter a number : ");
    scanf("%d",&a);
    if(a%6==0)
    printf("number is divisible by 2 and 3");
    else
    printf("number is not divisible by 2 and 3");
    return 0;
}