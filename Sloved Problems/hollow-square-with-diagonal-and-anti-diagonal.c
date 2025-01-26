//Hollow square with diagonal and anti-diagonal 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=n;j++)
       {
           if(i==1 || i==n || j==1 || j==n || i+j==n+1 || j==i)
           {
               printf("* ");
           }
           else
           {
               printf("  ");
           }
           
       }
       printf("\n");
    }

    return 0;
}
