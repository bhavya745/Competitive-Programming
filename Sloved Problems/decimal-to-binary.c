/*write a program to convert decimal to binary number
 input : 6
 output : 110
 input : 15
output : 1111 */

#include <stdio.h>
int main()
{
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    printf("%b",n); //%b is used to convert the decimal number to the binary number
    return 0;
}
