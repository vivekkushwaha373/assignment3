#include<stdio.h>
int main()
{
    char a;
    printf("enter the alphabet: ");
    scanf("%c",&a);
    
    if(a>=65 && a<=90)
    printf("character is in uppercase");
    else
    printf("character is in lowercase");
    return 0;
}