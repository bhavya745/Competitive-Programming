//attaching the str2 with each and evey index value of str1
//ABSEDARIAN SERIES
// input : str1 : "ABCDEF"
//         str2 : ate 
// output : Aate,Bate,Cate,Date,Eate,Fate
/* "Problem Statement:"
Write a program to create an Abecedarian Series. 
The program takes two strings as input: str1 and str2. 
It appends str2 to each character of str1 and displays the resulting series. 
This task simulates appending a suffix to every character in a string.
"Algorithm:"
1.Start.
2.Declare character arrays s1, s2, and out to store the input strings and the output string, respectively.
3.Prompt the user to enter the first string (s1).
4.Read the first string.
5.Prompt the user to enter the second string (s2).
6.Read the second string.
7.Iterate through each character of s1 using a for loop:
a.Use snprintf to format the output as the concatenation of the current character of s1 and s2.
b.Print the formatted output.
8.Print a newline after the loop for better readability.
9.End.
*/

#include <stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char s1[100] , s2[100];
    char out[100];
    printf("Enter the string1 : ");
    scanf("%s",&s1);
    printf("Enter the string2 : ");
    scanf("%s",&s2);
    for(int i=0;i<strlen(s1);i++)
    {
        snprintf(out, sizeof(out),"%c%s",s1[i],s2); // To append the files snprintf is used
        printf("%s ",out);
        
    }
    printf("\n");
    return 0;
}
/*Input:
Enter the string1 : ABCDEF
Enter the string2 : ate
Output:
Aate Bate Cate Date Eate Fate */