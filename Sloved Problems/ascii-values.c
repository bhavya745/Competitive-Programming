// to print ASCII values when range is given
/* "Problem Statement:"
Write a program to print the ASCII characters and their corresponding values for a given range. 
The ASCII table includes values from 0 to 127. Each line of the output should display the character and 
its ASCII value.
"Algorithm:"
1.Start.
2.Loop through the range of ASCII values (from 0 to 127).
3.For each value:
a.Use the %c format specifier to print the ASCII character corresponding to the value.
b.Use the %d format specifier to print the numerical ASCII value.
4.Print the character and its value on the same line with a tab separator for better readability.
5.End.*/


#include <stdio.h>
int main()
{
    for(int i=0;i<=127;i++)
    {
       printf("%c\t\t%d\n",i,i); 
    }
    return 0;
}

