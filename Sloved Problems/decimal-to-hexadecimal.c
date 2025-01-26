/*write a program to convert decimal to hexadecimal */
#include <stdio.h>
 int dtoh(int n) //decimal to hexadecimal
   {
       int hex[32]; //maximum storage area of an integer
       int i=0;
       if(n==0)
       {
           printf("0");
           return ;
       }
       while(n!=0)
       {
           int r=n%16;
           if(r<10)
           {
               hex[i]=r+'0';
           }
           else
           {
               hex[i]=r-10+'A';
           }
           n/=16;
           i++;
       }
       for(int k=i-1;k>=0;k--)
       {
           printf("%c",hex[k]);
       }
       printf("\n");
       
   }
   int main()
 {
  int d,n;
  printf("enter the decimal number : ");
  scanf("%d",&d);
  dtoh(d);
  return 0;
}
