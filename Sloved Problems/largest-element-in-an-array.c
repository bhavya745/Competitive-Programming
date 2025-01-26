//a program  to print the largest element in an array by taking random inputs
#include <stdio.h>
int main()
{
    int n,i;
    printf("enter no.of elements in an array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int large=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    printf("The largest element in the array is : %d",large);
    return 0;
}
