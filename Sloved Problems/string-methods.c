/*Strings: STRING METHODS/FUNCTIONS
 length = strlen() : to know about the length of given string
 size = sizeof() : return the length along with '\0'
 concatenate = strcat() : combines the strings
 copy = strcpy()
 compare = strcmp() */
 
#include <stdio.h>
#include<string.h>
int main()
{
    char sample[]="abcdefghijkl";
    char two[20];
    strcpy(two,sample); //copy
    printf("%s\n",two);
    printf("%d\n",strlen(sample)); //string len
    printf("%d\n",sizeof(sample)); // sizeof
    printf("%s \n",a);
    return 0;
}

//concatenate the string
char sample[]="abcdefghijkl";
char a="njkhsjahjbchb";
strcat(a,sample);
printf("%s \n",a);

//comparing the string
char one[20]="abcdefgh";
char two[20]="abcdefgh";
printf("%d\n",strcmp(one,two));
