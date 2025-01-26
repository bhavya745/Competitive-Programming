// To print prime numbers between the given range
#include <stdio.h>
int prime(int num)
{
    if(num<=1)
    {
        return 0;
    }
    int i=2;
    while(i*i<=num)
    {
        if(num%i==0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int main()
{
    int n,m;
    printf("enter the values of n and m : ");
    scanf("%d %d",&n,&m);
    for(int num=n;num<=m;num++)
    {
        if(prime(num))
        {
            printf("%d ",num);
        }
    }
    return 0;
    
    
}
