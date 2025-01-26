//Recursions
//Direct recursion is same the Tail recursion
//Indirect recursion
#include <stdio.h>
void funA(int n); //function declaration has to be done
void funB(int n);

void funA(int n)
{
    if(n<=0)
    return;
    printf("%d",n);
    funB(n-1);
}
void funB(int n)
{
    if(n<=0)
    return;
    printf("%d",n);
    funA(n-1);
}

int main()
{
    funA(6);
    return 0;
}
