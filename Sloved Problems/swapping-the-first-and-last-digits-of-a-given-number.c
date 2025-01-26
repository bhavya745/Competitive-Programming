// swapping the first and last digits of an given number
#include <stdio.h>
#include<math.h>
int main()
{
    int num,first,last,digit,swapped;
    printf("enter num : ");
    scanf("%d",&num);
    digit=(int)log10(num);
    first=num/pow(10,digit);
    last=num%10;
    swapped=last*pow(10,digit)+(num%(int)pow(10,digit)-last)+first;
    printf("%d",swapped);
    return 0;
}
