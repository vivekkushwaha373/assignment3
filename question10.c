#include<stdio.h>
int main()
{
 int sp,cp;
 printf("enter the selling price : ");
 scanf("%d",&sp);
 printf("enter the cost price: ");
 scanf("%d",&cp);
 if(sp>=cp)
 {  if(sp>cp)
    {
    printf("seller has a profit of %d rupees \n",sp-cp);
    printf("profit percentage is %f",((sp-cp)*100.0)/cp);
    }
     else
 {
    printf("seller has made no profit no loss ");
 }
 
 }
 else
 {
 printf("seller has a loss of %d rupees\n",cp-sp); 
 printf("loss percentage is %f",((cp-sp)*100.0)/cp);
 }

 
 
 return 0;
}