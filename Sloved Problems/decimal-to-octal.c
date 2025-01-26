/*write a program to convert decimal to octadecimal */
#include <stdio.h>
 int dec_to_oct(int n) //decimal to octal
   {
       int oct[32]; //maximum storage area of an integer
       int i=0;
       if(n==0)
       {
           printf("0");
           return ;
       }
       while(n!=0)
       {
           oct[i]=n%8;
           n/=8;
           i++;
       }
       for(int k=i-1;k>=0;k--)
       {
           printf("%d",oct[k]);
       }
       printf("\n");
       
   }
   int main()
 {
  int d,n;
  printf("enter the decimal number : ");
  scanf("%d",&d);
  dec_to_oct(d);
  return 0;
}