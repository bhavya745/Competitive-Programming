// Factorial of a number using function by recursion 
#include <stdio.h>
int Factorial( int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*Factorial(n-1);
}

int main()
{
    int n=5;
    printf("result is :%d",Factorial(n));
    return 0;
    
    
}
