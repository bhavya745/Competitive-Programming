/* An array[] of size n-1 with integers in the range of [1,n] , find the left over numbers from the first 
n integres.....
constraints : no duplicates or negative values occured
input : arr[]={1,3,2,6,7,8,4}
        n=8;
output : 5  */

#include <stdio.h>
int findm(int arr[],int size)
{
    int n= size+1;
    int totalsum=n*(n+1)/2;
    int arraysum=0;
    for(int i=0;i<size;i++)
    {
        arraysum+=arr[i];
    }
    return totalsum-arraysum;
}
int main()
{
    int arr[]={1,2,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int missingnumber=findm(arr,size);
    printf("The missing number is :%d\n",missingnumber);
    return 0;
} 
 
