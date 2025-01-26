//pascal's Triangle
#include <stdio.h>
int main()
{
    int row,c;
    printf("enter rows : ");
    scanf("%d",&row);
    for(int i=0;i<row;i++)
    {
        for(int s=1;s<=row-i;s++)
        {
            printf("  ");
        }
        for(int j=0;j<=i;j++)
        {
            if(j==0 || i==0)
            {
                c=1;
            }
            else
            {
                c=c*(i-j+1)/j;
                
            }
            printf("%4d", c);
        
        }
        printf("\n");
        
    }

    return 0;
}
