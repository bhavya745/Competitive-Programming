//a program  to print the second largest element in an array by taking random inputs
#include <stdio.h>
int main()
{
    int n,i;
    printf("enter no.of elements in an array : ");
    scanf("%d",&n);
    if(n<2)
    {
        printf("Array must contain atleast 2 elements");
        return 0;
    }
    int arr[n];
    printf("enter %d elements :\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int large=arr[0],large2=-1;
    for(i=1;i<n;i++)
    {
        if(arr[i]>large)
        {
            large2=large;
            large=arr[i];
        }
        else if(arr[i]>large2 && arr[i]!=large)
        {
          large2=arr[i];
           
        }
    }
    if(large2==-1)
    {
        printf("no second largest element found , all are equal\n");
    }
    else
    {
    printf("The second largest element in the array is : %d",large2);
    }
    
    return 0;
}
