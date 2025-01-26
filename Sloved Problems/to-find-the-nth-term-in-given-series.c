/* given series 0,0,7,6,14,12,18......
Task : to find the 14th term and 15th term
Solution Logic : by observing the series we can see that there are 7 and 6 multiples 
and now in the odd positions there are 7 multiples and in even positions there are 6 multiples
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n,x;
    printf("enter n : ");
    scanf("%d",&n);
    if(n%2==1)
    {
        x=7*(n/2);
        printf("%d",x);
    }
    else
    {
        x=6*((n/2)-1);
        printf("%d",x);
    }

    return 0;
}
