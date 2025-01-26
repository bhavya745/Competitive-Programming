/*task is to print a pattern using 2D array
spiarl matrix
   o/p :  1  2  3
          5  9  4
          7  6  5 */
#include <stdio.h>
int main()
{
    int n;
    printf("enter the size : ");
    scanf("%d",&n);
    int arr[n][n];
    int num=1;
    int top=0;
    int left=0;
    int right=n-1;
    int bottom=n-1;
    while(top<=bottom && left<=right)
    {
        for(int i=left;i<=right;i++)
        {
            arr[top][i]=num++;
        }
        top++;
        for( int i=top;i<=bottom;i++)
        {
            arr[i][right]=num++;
        }
        right--;
        if(top<=bottom)
        {
            for( int i=right;i>=left;i--)
            {
                arr[bottom][i]=num++;
            }
            bottom--;
            if(left<=right)
            {
                for( int i=bottom;i>=top;i--)
                {
                    arr[i][left]=num++;
                }
                left++;
            }
        }
    }
        for( int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d",arr[i][j]);
            }
            printf("\n");
        }
        
    
    
    return 0;
}
