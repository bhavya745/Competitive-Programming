/* given series 1,1,2,3,4,9,8,27
now we should get the final output as 2187 when n=16
so to solve this; terms : 1   2   3   4   5   6   7   8   9
                 series : 1   1   2   3   4   9   8   27
               exponent : 2^0 3^0 2^1 3^1 2^2 3^2 2^3 3^3 */
#include <stdio.h>
#include<math.h>
int main()
{
    int n,term;
    printf("enter n :");
    scanf("%d",&n);
    if(n%2==1)
    {
        term=pow(2,n/2);
        printf("value is %d",term);
    }
    else
    {
        int term2 = pow(3,(n/2)-1);
        printf("value is %d",term2);
    }

    return 0;
}
