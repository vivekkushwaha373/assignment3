#include<stdio.h>
int main()
{
    int a,b,c,D;
    printf("enter the coefficient of first x^2: ");
    scanf("%d",&a);
    printf("enter the coefficient of x: ");
    scanf("%d",&b);
    printf("enter the constant: ");
    scanf("%d",&c);
    D=(b*b)-(4*a*c);
    if(D==0)
    {
        printf("roots are real and equal");
    }
    if(D>0)
    {
        printf("roots are real and distinct");
    }
    if(D<0)
    printf("roots are imaginery ");
    return 0;
}