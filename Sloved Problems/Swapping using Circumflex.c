// swapping of two numbers by using circumflex operator//
#include <stdio.h>
int main()
{
   int a,b;
   printf("enter 2 numbers : ");
   scanf("%d %d",&a,&b);
   printf("before swapping :a=%d,b=%d\n",a,b);
      if(a!=0 && b!=0)
      {
      a=a^b;
      b=a^b;
      a=a^b;
   printf("after swapping : a=%d,b=%d",a,b);
     }
   else
   {
       printf("enter non zero numbers");
   }
    return 0;
}
