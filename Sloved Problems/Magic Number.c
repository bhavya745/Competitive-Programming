#include <stdio.h>
int main()
{
    int num,onum,sum,digit;
    printf("enter num : ");
    scanf("%d",&num);
    onum=num;
    while(num>=10)
    {
         sum=0;
        while(num>0)
        {
            digit=num%10;
            sum=sum+digit;
            num/=10;
        }
        num=sum;
    }
    if(num==1)
    {
        printf("%d is a magic number",onum);
    }
    else
    {
        printf("not a magic number");
    }

    return 0;
}
