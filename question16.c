#include<stdio.h>
int main()
{
    char a;
    printf("enter a character : ");
    scanf("%c",&a);
    if(a>=65 && a<=90)
    printf("given character is an uppercase letter ");
    if(a>=97 && a<=122)
    printf("given character is a lowercase letter ");
    if(a>=48 && a<=57)
    printf("given character is a digit");
    if(a>122 || a<48 || a>90 && a<97 || a>57 && a<65)
    printf("given character is a special character");
    return 0;
}