//usage of pointers in arrays
#include <stdio.h>
int main()
{
   int num[6]={100,200,500,800,300,600};
   int i;
   for(i=0;i<6;i++)
   {
       printf("%p\n",&num[i]);
   }
    return 0;
}
