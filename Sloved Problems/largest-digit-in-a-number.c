// largest digit in a number
#include <stdio.h>
int main()
{
    int n,d,large=0;
    printf("enter n :");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        if(d>large)
        {
            large=d;
        }
        n/=10;
    }
    printf("%d",large);
    return 0;
}
