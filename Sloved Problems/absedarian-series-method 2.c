//Absedarian series approach-2
#include <stdio.h>
#include <string.h>
int main() {
    // Define two strings
    char str1[] = "ABCDE";
    char str2[] = "XYZ";
    
    // Calculate the lengths of str1 and str2
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    // Loop through each character of str1
    for (int i = 0; i < len1; i++) {
        // Print the character from str1
        printf("%c", str1[i]);
        
        // Print str2 after each character of str1
        printf("%s", str2);
    }

    printf("\n"); // To add a newline at the end
    return 0;
}
