// swapping of two numbers//
#include <stdio.h>
int main()
{
   int a,b,temp;
   printf("enter 2 numbers : ");
   scanf("%d %d",&a,&b);
   printf("before swapping :a=%d,b=%d\n",a,b);
      if(a!=0 && b!=0)
      {
      temp=a;
      a=b;
      b=temp;
      printf("after swapping : a=%d,b=%d",a,b);
      }
   else
   {
       printf("enter non zero numbers");
   }
    return 0;
}
