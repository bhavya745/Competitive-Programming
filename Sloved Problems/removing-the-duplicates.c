/* given array arr[] with n elements, the task is to delete the repetaed numbers from the sorted array
input : arr[1,1,2,2,2,3,4,4,4]
output : {1,2,3,4} */

#include <stdio.h>
int main()
{
    int arr[]={1,1,2,2,2,3,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(n==0 || n==1)
    {
        printf("Array is after removing duplicate elements");
         for(int i=0;i<n;i++)
          {
            printf("%d",arr[i]);
          }
    
    return 0;
}
int j=0;
for( int i=0;i<n-1;i++)
{
    if(arr[i]!=arr[i+1])
    {
        arr[j++]=arr[i];
        
    }
}
arr[j++]=arr[n-1];
printf("The array after removing the duplicate elements : ");
 for(int i=0;i<j;i++)
       
          printf("%d",arr[i]);
    
return 0;
}

