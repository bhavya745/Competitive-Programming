// Nested recursion
#include <stdio.h>
int nest(int n)
{
    if(n>100)
    return n-10; //106-10=96 // 107-10=97
    return nest(nest(n+11)); // 96+11=107 // 97+11=108
}
int main()
{
    printf("Result : %d\n",nest(95)); //95<=100 function calls with in the function
                                     // 95+11=106
    return 0;
}
