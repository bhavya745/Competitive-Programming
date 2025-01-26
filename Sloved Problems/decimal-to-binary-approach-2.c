/*write a program to convert decimal to binary number
 input : 6
 output : 110
 input : 15
output : 1111 */

#include <stdio.h>
 int dtob(int n) //decimal to binary
   {
       int binary[32]; //maxiimun storage area of an integer
       int i=0;
       if(n==0)
       {
           printf("0");
           return ;
       }
       while(n!=0)
       {
           binary[i]=n%2;
           n=n/2;
           i++;
       }
       for(int k=i-1;k>=0;k--)
       {
           printf("%d",binary[k]);
       }
       printf("\n");
       
   }
   int main()
 {
  int d,n;
  printf("enter the decimal number : ");
  scanf("%d",&d);
  dtob(d);
  return 0;
}
