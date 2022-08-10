#include<stdio.h>
int main()
{   int sub1,sub2,sub3,sub4,sub5;
    int marks;
    printf("enter the marks of subject 1 : ");
    scanf("%d",&sub1);
    printf("enter the marks of subject 2 : ");
    scanf("%d",&sub2);
    printf("enter the marks of subject 3 : ");
    scanf("%d",&sub3);
    printf("enter the marks of subject 4 : ");
    scanf("%d",&sub4);
    printf("enter the marks of subject 5 : ");
    scanf("%d",&sub5);
    marks=sub1+sub2+sub3+sub4+sub5;
    if(marks/5>=33)
    {
    printf("result: pass");
    }
    else
    {
    printf("result: fail");
    }
    return 0;
}