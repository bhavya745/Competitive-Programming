//Simple example for nested loops
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
            printf("Data ");
        }
        printf("\n");
    }

    return 0;
}
