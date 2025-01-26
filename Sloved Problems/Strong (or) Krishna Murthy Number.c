//STRONG OR KRISHNA MURTHY NUMBER//
#include <stdio.h>
int main()
{
   int num,sum=0,rem,onum,fact;
   printf("enter num : ");
   scanf("%d",&num);
   onum=num;
   while(num>0)
   {
       rem=num%10;
       fact=1;
     for(int i=1;i<=rem;i++)
     {
         
         fact=fact*i;
     }
         sum+=fact;
         num/=10;
   }
    
     if(sum==onum)
     {
         printf("yes");
     }
     else
     {
         printf("no");
     }
    return 0;
}
