# Competitive-Programming

This repository contains solutions to various C programming problems, covering topics such as bitwise operations, string manipulations, functions, pointers, array's and more.


---

1. Bitwise Not Operation (~)

**Problem Statement**:  
Demonstrate the bitwise NOT operation (`~`) on an unsigned integer.

**Algorithm**:
1. Declare an unsigned integer `x` and initialize it to 1.
2. Perform the bitwise NOT operation (`~`) on `x`.
3. Print the result using `%d` for signed and `%u` for unsigned integer format.

**Sample Input**:  
No input required.

**Sample Output**:
```
-1
4294967295
```

**Solution**:
```c
#include <stdio.h>
int main()
{
    unsigned int x = 1;
    printf("%d", -x);
    printf("%u", -x);
    return 0;
}
```

---

2. Armstrong Number Check

**Problem Statement**:  
Check if a given number is an Armstrong number. A number is Armstrong if the sum of the cubes of its digits equals the number itself.

**Algorithm**:
1. Input a number `num`.
2. Calculate the sum of the cubes of its digits.
3. If the sum equals the original number, print "Yes". Otherwise, print "No".

**Sample Input**:
```
153
```

**Sample Output**:
```
Yes
```

**Solution**:
```c
#include <stdio.h>
int main()
{
   int num, sum = 0, rem;
   printf("Enter num: ");
   scanf("%d", &num);
   int onum = num;
   while(num > 0)
   {
       rem = num % 10;
       sum += rem * rem * rem;
       num /= 10;
   }

   if(onum == sum)
   {
       printf("Yes");
   }
   else
   {
       printf("No");
   }
   return 0;
}
```

---

3. Display ASCII Values

**Problem Statement**:  
Display the ASCII values of characters from 0 to 127.

**Algorithm**:
1. Use a loop to iterate through integers 0 to 127.
2. Print the character corresponding to each integer and its ASCII value.

**Sample Input**:  
No input required.

**Sample Output**:
```
0       0
1       1
2       2
...
126     126
127     127
```

**Solution**:
```c
#include <stdio.h>
int main()
{
    for(int i = 0; i <= 127; i++)
    {
       printf("%c		%d", i, i); 
    }
    return 0;
}
```

---

4. Pointer Demonstration

**Problem Statement**:  
Demonstrate the use of pointers by displaying a variable's value and its memory address.

**Algorithm**:
1. Declare an integer variable `num`.
2. Declare a pointer `ptr` and store the address of `num` in it.
3. Print the value of `num`, the memory address of `num`, and the address stored in `ptr`.

**Sample Input**:  
No input required.

**Sample Output**:
```
100
0x7ffd58d2b7fc   // Address may vary
0x7ffd58d2b7fc   // Address may vary
```

**Solution**:
```c
#include <stdio.h>
int main()
{
    int num = 100;
    int *ptr = &num;
    printf("%d", num);
    printf("%p", &num);
    printf("%p", ptr);
    return 0;
}
```

---

5. Bitwise Shift Operations

**Problem Statement**:  
Perform right and left bitwise shift operations on a number.

**Algorithm**:
1. Declare an integer variable `result` and perform a right shift operation on a number.
2. Declare another integer variable `result2` and perform a left shift operation on the same number.
3. Print both results.

**Sample Input**:  
No input required.

**Sample Output**:
```
1
24
```

**Solution**:
```c
#include <stdio.h>
#include <math.h>
int main()
{
    int result = 6 >> 2; // right shift
    int result2 = 6 << 2; // left shift
    printf("%d", result);
    printf("%d", result2);
    return 0;
}
```

---

6. Anagram Check

**Problem Statement**:  
Check if two strings are anagrams of each other. Two strings are anagrams if they contain the same characters in any order.

**Algorithm**:
1. Check if the lengths of the two strings are equal.
2. Initialize an array `c` of size 256 to store the frequency of each character.
3. For each character in the strings, increment or decrement the corresponding position in the array.
4. If all values in the array are zero, the strings are anagrams.

**Sample Input**:
```
Enter s1: listen
Enter s2: silent
```

**Sample Output**:
```
Both strings are anagram
```

**Solution**:
```c
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isanagram(char s1[], char s2[])
{
    int c[256] = {0};
    int i;
    if(strlen(s1) != strlen(s2))
    {
        return false;
    }
    for(i = 0; s1[i] && s2[i]; i++)
    {
        c[(int)s1[i]]++;
        c[(int)s2[i]]--;
    }
    for(i = 0; i < 256; i++)
    {
        if(c[i] != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    char s1[100], s2[100];
    printf("Enter s1: ");
    scanf("%s", s1);
    printf("Enter s2: ");
    scanf("%s", s2);
    if(isanagram(s1, s2))
    {
        printf("Both strings are anagram");
    }
    else
    {
        printf("Not an anagram");
    }
    return 0;
}
```

---

7. Series Calculation

**Problem Statement**:  
Given a series where the odd-indexed terms are powers of 2 and the even-indexed terms are powers of 3, calculate the nth term of the series.

**Algorithm**:
1. Input the value `n`.
2. If `n` is odd, calculate `2^(n/2)`.
3. If `n` is even, calculate `3^(n/2 - 1)`.
4. Print the result.

**Sample Input**:
```
Enter n: 16
```

**Sample Output**:
```
Value is 2187
```

**Solution**:
```c
#include <stdio.h>
#include <math.h>
int main()
{
    int n, term;
    printf("Enter n: ");
    scanf("%d", &n);
    if(n % 2 == 1)
    {
        term = pow(2, n / 2);
        printf("Value is %d", term);
    }
    else
    {
        int term2 = pow(3, (n / 2) - 1);
        printf("Value is %d", term2);
    }
    return 0;
}
```

---

8. String Concatenation

**Problem Statement**:  
Concatenate two strings and display the result.

**Algorithm**:
1. Declare two strings `a` and `sample`.
2. Use the `strcat()` function to concatenate `sample` to `a`.
3. Print the concatenated result.

**Sample Input**:
```
No input required.
```

**Sample Output**:
```
njkhsjahjbchbabcdefghijkl
```

**Solution**:
```c
#include <stdio.h>
#include <string.h>
int main()
{
    char sample[] = "abcdefghijkl";
    char a[20] = "njkhsjahjbchb";
    strcat(a, sample);
    printf("%s", a);
    return 0;
}
```

---
9. Convert Decimal to Binary Number
**Problem Statement:**
Write a program to convert a decimal number to its binary equivalent.

**Sample Input:**
```
6
```

**Sample Output:**
```
110
```

**Solution:**
```c
#include <stdio.h>
 int dtob(int n) {
       int binary[32];
       int i=0;
       if(n==0) {
           printf("0");
           return ;
       }
       while(n!=0) {
           binary[i]=n%2;
           n=n/2;
           i++;
       }
       for(int k=i-1;k>=0;k--) {
           printf("%d",binary[k]);
       }
       printf("");
   }

   int main() {
       int d;
       printf("enter the decimal number : ");
       scanf("%d",&d);
       dtob(d);
       return 0;
   }
```

---
10. Convert Decimal to Hexadecimal Number
**Problem Statement:**
Write a program to convert a decimal number to its hexadecimal equivalent.

**Sample Input:**
```
15
```

**Sample Output:**
```
F
```

**Solution:**
```c
#include <stdio.h>
int dtoh(int n) 
     {
       int hex[32];
       int i=0;
       if(n==0) 
       {
           printf("0");
           return ;
       }
       while(n!=0) 
       {
           int r=n%16;
           if(r<10) 
           {
             hex[i]=r+'0';
           } else 
           {
             hex[i]=r-10+'A';
           }
           n/=16;
           i++;
       }
       for(int k=i-1;k>=0;k--) 
       {
           printf("%c",hex[k]);
       }
       printf("");
   }

   int main() 
   {
       int d;
       printf("enter the decimal number : ");
       scanf("%d",&d);
       dtoh(d);
       return 0;
   }
```

---

11. Convert Decimal to Octal Number
**Problem Statement:**
Write a program to convert a decimal number to its octal equivalent.

**Sample Input:**
```
8
```

**Sample Output:**
```
10
```

**Solution:**
```c
#include <stdio.h>
int dec_to_oct(int n) 
    {
       int oct[32];
       int i=0;
       if(n==0) 
       {
           printf("0");
           return ;
       }
       while(n!=0) 
       {
           oct[i]=n%8;
           n/=8;
           i++;
       }
       for(int k=i-1;k>=0;k--) 
       {
           printf("%d",oct[k]);
       }
       printf("");
   }

   int main() 
   {
       int d;
       printf("enter the decimal number : ");
       scanf("%d",&d);
       dec_to_oct(d);
       return 0;
   }
```

---

12. Flip Array in Cyclic Order
**Problem Statement:**
Given an array of integers, cyclically flip the array by `d` positions to the left.

**Sample Input:**
```
arr[] = {1, 2, 3, 4, 5, 6}
d = 3
```

**Sample Output:**
```
[4, 5, 6, 1, 2, 3]
```

**Solution:**
```c
#include <stdio.h>
int main() 
  {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int d = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < d; i++) 
    {
        int first = arr[0];
        for (int j = 0; j < n - 1; j++) 
        {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = first;
    }
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
```

---

13. Factorial of a Number Using Recursion
**Problem Statement:**
Write a program to find the factorial of a number using recursion.

**Sample Input:**
```
5
```

**Sample Output:**
```
120
```

**Solution:**
```c
#include <stdio.h>
int Factorial(int n) 
  {
    if (n == 0) 
    {
        return 1;
    }
    return n * Factorial(n - 1);
  }

int main() 
{
    int n = 5;
    printf("result is : %d", Factorial(n));
    return 0;
}
```

---

14. Fibonacci Series Using Recursion
**Problem Statement:**
Write a program to print the Fibonacci series up to the `n`th term using recursion.

**Sample Input:**
```
5
```

**Sample Output:**
```
0 1 1 2 3
```

**Solution:**
```c
#include <stdio.h>
int Fib(int n) 
{
    if (n == 0) 
    {
        return 0;
    }
    if (n == 1) 
    {
        return 1;
    }
    return Fib(n - 1) + Fib(n - 2);
}

int main() 
{
    int n, i;
    printf("enter n :");
    scanf("%d", &n);
    for (i = 0; i < n; i++) 
    {
        printf("%d ", Fib(i));
    }
    printf("");
    return 0;
}
```

---

15. Find Missing Number in an Array
**Problem Statement:**
Given an array of integers from 1 to n with one number missing, find the missing number.

**Sample Input:**
```
arr[] = {1, 2, 4, 5, 6}
n = 6
```

**Sample Output:**
```
3
```

**Solution:**
```c
#include <stdio.h>
int findm(int arr[], int size) 
{
    int n = size + 1;
    int totalsum = n * (n + 1) / 2;
    int arraysum = 0;
    for (int i = 0; i < size; i++) 
    {
        arraysum += arr[i];
    }
    return totalsum - arraysum;
}

int main() 
{
    int arr[] = {1, 2, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int missingnumber = findm(arr, size);
    printf("The missing number is : %d", missingnumber);
    return 0;
}
```

---

16. Sum of Two Integers
**Problem Statement:**
This program defines a function `sum()` which takes two integer parameters and prints their sum. The function is called with two integer values passed as arguments.

**Algorithm**:
1. Define a function `sum(int a, int b)` that takes two integers as parameters.
2. Inside the function, calculate the sum of the two integers and print the result.
3. In the `main()` function, call the `sum()` function with two integer values.

**Sample Input**:
4 90

**Sample Output**:
sum is : 94

**Code**:
```c
#include <stdio.h>

void sum(int a, int b)
{
    int add = a + b;
    printf("sum is : %d ", add);
}

int main()
{
    sum(4, 90); 
    return 0;
}
---
---






