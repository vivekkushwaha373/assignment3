#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first side length of the traingle : ");
    scanf("%d",&a);
    printf("enter the second side length of the traingle : ");
    scanf("%d",&b);
    printf("enter the third side length of the traingle : ");
    scanf("%d",&c);
    if(a+b>c && b+c>a && a+c>b)
    printf("traingle is possible by the given length ");
    else
    printf("traingle is not possible ");
    return 0;
}