//ARMSTRONG NUMBER//
/* "Problem Statement:"
Write a program to determine if a given number is an Armstrong Number. 
An Armstrong Number (or Narcissistic Number) is a number that is equal to the sum of the cubes of its digits. 
For example, 153 is an Armstrong number because 
1^3+5^3+3^3 = 153
"Algorithm:"
1.Start.
2.Declare variables num, sum, and rem to store the input number, 
the cumulative sum of cubes of digits, and the remainder respectively. Initialize sum to 0.
3.Prompt the user to input a number and store it in num.
4.Copy the value of num into a separate variable onum for comparison later.
5.Use a while loop to iterate until num becomes 0:
a.Extract the last digit of num using num % 10 and store it in rem.
b.Add the cube of rem to sum.
c.Remove the last digit of num by dividing it by 10.
6.After the loop, compare the original number onum with the computed sum:
a.If onum == sum, print "yes".
b.Otherwise, print "no".
7.End.*/

#include <stdio.h>
int main()
{
   int num,sum=0,rem;
   printf("enter num : ");
   scanf("%d",&num);
   int onum=num;
   while(num>0)
   {
       rem=num%10;
       sum+=rem*rem*rem;
         num/=10;
   }
    
     if(onum==sum)
     {
         printf("yes");
     }
     else
     {
         printf("no");
     }
    return 0;
}
/*Input 1:
enter num : 153
yes
Input 2:
enter num : 123
no
*/
