//Right angled triangle (hollow)
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       for(int j=1;j<=i;j++)
       {
           if(i==j || i==n || j==1 )
           {
               printf("  %d",i);
           }
           else
           {
               printf(" ");
           }
           
       }
       printf("\n");
    }

    return 0;
}
