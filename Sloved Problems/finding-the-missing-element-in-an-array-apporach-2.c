#include<stdio.h>
 int main(){
 int n,i;
 printf("enter n : ");
 scanf("%d",&n);
 int arr[n];
 printf("enter array elements:");
 for(i=0;i<n-1;i++)
 {
     scanf("%d",&arr[i]);
 }
 int sum=0;
 for(i=0;i<n-1;i++)
 {
     sum=sum+arr[i];
 }
 int total=(n*(n+1)/2);
 int c=total-sum;
 printf("The missing value is : %d",c);
 return 0;
 }