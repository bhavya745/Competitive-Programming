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
```
1. Define a function `sum(int a, int b)` that takes two integers as parameters.
2. Inside the function, calculate the sum of the two integers and print the result.
3. In the `main()` function, call the `sum()` function with two integer values.
```

**Sample Input**:
```
4 90
```

**Sample Output**:
```
sum is : 94
```

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
```

17. Product of Two Integers
**Problem Statement:**
This program defines a function product() which takes two integer parameters and returns their product. The function is called with two integer values passed as arguments, and the result is printed in the main() function.

**Algorithm**:
```
1.Define a function product(int a, int b) that takes two integers as parameters.
2.Inside the function, calculate and return the product of the two integers.
3.In the main() function, call the product() function with two integer values and store the result in a variable.
4.Print the result of the multiplication.
```

**Sample Input**:
```
4 8
```
**Sample Output**:
```
result is : 32
```

**Code**:
```
#include <stdio.h>

int product(int a, int b)
{
    return a * b;
}

int main()
{
    int res = product(4, 8);
    printf("result is : %d", res);
    return 0;
}
```

18. Counting Valleys During a Hike
**Problem Statement:**
This program defines a function valley() to count the number of valleys Gary crosses during his hike based on a sequence of steps represented by the characters U (up) and D (down).

**Algorithm**:
```
1.Define a function valley(long int steps, char *path) that takes the total number of steps and a path string containing characters 'U' and 'D'.
2.Track the hiker's level relative to sea level and count valleys by detecting when a downward step leads to a return to sea level.
3.Print the number of valleys crossed.
```

**Sample Input**:
```
steps = 8
path = "UDDDUDUU"
```

**Sample Output**:
```
Number of valleys crossed: 1
```

**Code**:
```

#include <stdio.h>

int valley(long int steps, char *path)
{
    long int level, i, vcount = 0;
    for(i = 0; i < steps; i++)
    {
        if(path[i] == 'U')
        {
            level++;
        }
        else if (path[i] == 'D')
        {
            if(level == 1)
            {
                vcount++;
            }
            level--;
        }
    }
    return vcount;
}

int main()
{
   long int steps;
   printf("Enter steps: ");
   scanf("%li", &steps);
   char path[steps];
   int i, result;
   
   printf("Enter path: ");
   for(i = 0; i < steps; i++)
   {
       scanf(" %c", &path[i]);  // Added space before %c to skip newline character
   }
   
   result = valley(steps, path);
   printf("Number of valleys crossed: %d\n", result);
   return 0;
}
```

19. Hollow Square
**Problem Statement**:
Write a program to print a hollow square pattern of asterisks (*) of size n. The square should have a border of stars, and the inner part should be empty (spaces). The size of the square is determined by the user input, n.

**Algorithm**:
```
1.Read the size of the square n.
2.Iterate through each row (from 1 to n).
3.For the first and last row, print n stars.
4.For the other rows, print a star at the beginning and the end, and print spaces in between.
5.Print the resulting hollow square pattern.
```

**Sample Input**:
```
Enter n : 5
```

**Sample Output**:
```

* * * * * 
*       * 
*       * 
*       * 
* * * * *
```
**Solution**:
```
#include <stdio.h>

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) 
    {
        for(int j = 1; j <= n; j++) 
        {
            if(i == 1 || i == n || j == 1 || j == n) 
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
```

20. Head Recursion
**Problem Statement**:
Write a program to demonstrate recursion using "Head Recursion". The program should print the numbers from 1 to n using recursive calls.

**Algorithm**:
```
1.Define a recursive function head(n) that:
2.If n is 0, the recursion terminates (base case).
3.therwise, the function calls itself with n-1, and after returning from the recursion, it prints the value of n.
4.Call the head(n) function in main() with the desired value of n.
```

**Sample Input**:
```
Enter n: 6
```

**Sample Output**:
```
123456
```

**Solution**:
```
#include <stdio.h>

// Head Recursion function
int head(int n) 
{
    if(n == 0) return;  // Base case

    head(n-1);  // Recursive call before printing
    printf("%d", n);  // Print n after recursion
}

int main()
{
    head(6);
    return 0;
}
```

21. Hollow Square with Diagonal and Anti-Diagonal
**Problem Statement**:
Write a program that generates a hollow square pattern of size n, where:
The boundary of the square is filled with asterisks (*).
The diagonal (from top-left to bottom-right) is also filled with asterisks (*).
The anti-diagonal (from top-right to bottom-left) is filled with asterisks (*).
The inner spaces of the square are left blank.

**Algorithm**:
```
1.Take an integer input n, which represents the size of the square.
2.Use nested loops to traverse through each row and column of the square:
3.For each cell, check the following conditions:
4.If the cell is on the boundary (first or last row/column), print *.
5.If the cell is on the diagonal (where row index equals column index), print *.
6.If the cell is on the anti-diagonal (where the sum of row and column index equals n + 1), print *.
7.Otherwise, print a blank space.
8.Repeat the process until the entire square is printed.
```

**Sample Input**:
```
Enter n : 5
```

**Sample Output**:
```
* * * * * 
*   *   * 
* * * * * 
*   *   * 
* * * * *
```

**Solution**:
```
#include <stdio.h>

int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) 
    {
        for(int j = 1; j <= n; j++) 
        {
            if(i == 1 || i == n || j == 1 || j == n || i + j == n + 1 || j == i) 
            {
                printf("* ");
            }
            else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
```

22. Indirect Recursion
**Problem Statement**:
Demonstrates indirect recursion where two functions call each other recursively until a base case is reached.

**Algorithm**:
```
1.Function1() prints the number and calls Function2().
2.Function2() prints the number and calls Function1().
3.The recursion continues until the base case is met.
```
**Sample Input**:
```
Enter a number: 6
```
**Sample Output**:
```
Function1 calls Function2
Function2 calls Function1
Function1 calls Function2
Function2 calls Function1
Function1 calls Function2
Function2 calls Function1
```
**Solution**:
```
#include <stdio.h>
void function2(int n);
void function1(int n) 
{
    if (n == 0) return;
    printf("Function1 calls Function2\n");
    function2(n - 1);
}

void function2(int n) 
{
    if (n == 0) return;
    printf("Function2 calls Function1\n");
    function1(n - 1);
}

int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    function1(n);
    return 0;
}
```
23. Largest Digit in a Number
**Problem Statement**:
Finds the largest digit in a given number. The program will read an integer from the user and print the largest digit.

**Algorithm**:
```
1.Take the input number.
2.Extract each digit using modulo and division.
3.Compare each digit with the largest digit so far.
```
**Sample Input**:
```
Enter a number: 75864
```
**Sample Output**:
```
The largest digit is: 8
```
**Solution**:
```
#include <stdio.h>
int findLargestDigit(int n) 
{
    int largest = 0;
    while (n > 0) 
   {
        int digit = n % 10;
        if (digit > largest) 
        {
            largest = digit;
        }
        n /= 10;
    }
    return largest;
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The largest digit is: %d\n", findLargestDigit(num));
    return 0;
}
```
24. Largest Element in an Array
**Problem Statement**:
Finds the largest element in a given array of integers. The program will take user input for the array size and elements, then output the largest element.

**Algorithm**:
```
1.Read the size of the array.
2.Read the elements of the array.
3.Loop through the array and compare each element to find the largest one.
```
**Sample Input**:
```
Enter the number of elements: 5
Enter the elements: 12 45 7 89 34
```
**Sample Output**:
```
The largest element is: 89
```
**Solution**:
```
#include <stdio.h>
int findLargest(int arr[], int size) {
    int largest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The largest element is: %d\n", findLargest(arr, n));
    return 0;
}
```

25. Magic Number
**Problem Statement**:
A number is a magic number if the sum of its digits is repeatedly calculated until a single digit is obtained. If the final digit is 1, it is a magic number.

**Algorithm**:
```
1.Calculate the sum of the digits of the number.
2.Repeat the process until the number is a single digit.
3.If the final digit is 1, print "Magic number"; otherwise, print "Not a magic number".
```
**Sample Input**:
```
Enter a number: 19
```
**Sample Output**:
```
The number 19 is a magic number.
```
**Solution**:
```
#include <stdio.h>
int isMagicNumber(int n) 
{
    int sum;
    while (n >= 10) 
    {
        sum = 0;
        while (n > 0) 
        {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return (n == 1);
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isMagicNumber(num)) 
    {
        printf("The number %d is a magic number.\n", num);
    } else 
    {
        printf("The number %d is not a magic number.\n", num);
    }
    return 0;
}
```

26. Nested Recursion
**Problem Statement**:
Demonstrates nested recursion. A number is passed to a function that calls itself twice, recursively.

**Algorithm**:
```
1.If the number is greater than 100, return the number minus 10.
2.Otherwise, call the function recursively twice with n + 11.
```
**Sample Input**:
```
Enter a number: 95
```
**Sample Output**:
```
The result is: 106
```
**Solution**:
```
#include <stdio.h>
int nestedRecursion(int n) 
{
    if (n > 100) 
    {
        return n - 10;
    } else 
    {
        return nestedRecursion(nestedRecursion(n + 11));
    }
}

int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The result is: %d\n", nestedRecursion(num));
    return 0;
}
```
27. Pascal's Triangle
**Problem Statement**:
Generates and prints Pascal's Triangle for a given number of rows. Pascal's Triangle is a triangular array where each number is the sum of the two numbers directly above it.

**Algorithm**:
```
1.For each row, calculate the values using binomial coefficients.
2.Print the resulting values for the required number of rows.
```
**Sample Input**:
```
Enter the number of rows: 5
```
**Sample Output**:
```

1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
```

**Solution**:
```
#include <stdio.h>
int binomialCoeff(int n, int k) 
{
    if (k == 0 || k == n) 
    {
        return 1;
    } else 
    {
        return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
    }
}

void printPascalsTriangle(int rows) 
{
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j <= i; j++) 
        {
            printf("%d ", binomialCoeff(i, j));
        }
        printf("\n");
    }
}

int main() 
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printPascalsTriangle(rows);
    return 0;
}
```
28. Prime Numbers Between Given Range
**Problem Statement**
Print all prime numbers between two given numbers n and m.

**Algorithm**
```
1.Accept the two numbers n and m.
2.Check for each number in the range if it's prime by:
3.Looping through numbers from 2 to the square root of the number.
4.If divisible by any number in that range, it's not prime.
5.Print the prime numbers.
```

**Sample Input**:
```
enter the values of n and m: 10 30
```
**Sample Output**:
```
11 13 17 19 23 29
```

**Code**:
```
#include <stdio.h>
int prime(int num)
{
    if(num <= 1)
    {
        return 0;
    }
    int i = 2;
    while(i * i <= num)
    {
        if(num % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int main()
{
    int n, m;
    printf("enter the values of n and m : ");
    scanf("%d %d", &n, &m);
    for(int num = n; num <= m; num++)
    {
        if(prime(num))
        {
            printf("%d ", num);
        }
    }
    return 0;
}
```
29. Remove Duplicate Elements from Sorted Array
**Problem Statement**
Given a sorted array, remove the duplicate elements and print the unique elements.

**Algorithm**
```
1.Loop through the array and compare each element with the next one.
2.If the current element is different from the next one, move it to the new position.
3.Print the new array without duplicates.
```

**Sample Input**:
```
enter the array elements: 1 1 2 2 2 3 3
```
**Sample Output**:
```
The array after removing duplicate elements: 1 2 3
```
**Code**:
```
#include <stdio.h>
int main()
{
    int arr[] = {1, 1, 2, 2, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (n == 0 || n == 1)
    {
        printf("Array is after removing duplicate elements: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        return 0;
    }
    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[n - 1];
    printf("The array after removing the duplicate elements: ");
    for (int i = 0; i < j; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
```

30. Reverse of a Number
**Problem Statement**
Reverse the given number.

**Algorithm**
```
1.Read the number.
2.Extract the last digit by taking the modulus of 10.
3.Multiply the result by 10 and add the extracted digit.
4.Repeat until the number becomes zero.
```

**Sample Input**:
```
enter num: 12345
```
**Sample Output**:
```
Reverse of num is 54321
```
**Code**:
```
#include <stdio.h>
int main()
{
   int num, rev = 0, rem;
   printf("enter num: ");
   scanf("%d", &num);
   while(num > 0)
   {
       rem = num % 10;
       rev = rev * 10 + rem;
       num = num / 10;
   }
   printf("rev of num is %d", rev);
   return 0;
}
```

31. Right Angled Hollow Triangle Pattern
**Problem Statement**
Print a right-angled hollow triangle pattern.

**Algorithm**
```
1.Loop for each row (from 1 to n).
2.In each row, print the number only on the boundaries (first column, last column, and last row).
3.Print spaces for other positions.
```
**Sample Input**:
```
Enter n: 5
```
**Sample Output**:
```
1
2 2
3   3
4     4
5 5 5 5 5
```

**Code**:
```c
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == j || i == n || j == 1)
            {
                printf("%d ", i);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
```
32. Second Largest Element in an Array
**Problem Statement**
Print the second largest element in an array.

**Algorithm**
```
Loop through the array.
Track the largest and second largest elements by comparing each element.
Print the second largest element.
```

**Sample Input**:
```
Enter number of elements in array: 5
Enter array elements: 10 20 30 40 50
```

**Sample Output**:
```
The second largest element is: 40
```
**Code**:
```
#include <stdio.h>
int main()
{
    int n, i;
    printf("enter no. of elements in an array: ");
    scanf("%d", &n);
    if (n < 2)
    {
        printf("Array must contain at least 2 elements");
        return 0;
    }
    int arr[n];
    printf("enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int large = arr[0], large2 = -1;
    for (i = 1; i < n; i++)
    {
        if (arr[i] > large)
        {
            large2 = large;
            large = arr[i];
        }
        else if (arr[i] > large2 && arr[i] != large)
        {
            large2 = arr[i];
        }
    }
    if (large2 == -1)
    {
        printf("no second largest element found, all are equal\n");
    }
    else
    {
        printf("The second largest element in the array is: %d", large2);
    }
    return 0;
}
```

33. Nested Loops Example
**Problem Statement**
Print the word "Data" multiple times using nested loops.

**Algorithm**
```
1.Use a nested loop to print "Data" n times in n rows.
```
**Sample Input**:
```
Enter n: 3
```
**Sample Output**:
```
Data Data Data
Data Data Data
Data Data Data
```
**Code**:
```
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("Data ");
        }
        printf("\n");
    }
    return 0;
}
```

34. Spiral Matrix
**Problem Statement**
Generate a spiral matrix of size n x n.

**Algorithm**
```
1.Define four boundaries: top, left, right, and bottom.
2.Fill the matrix with numbers in a spiral pattern.
3.Print the matrix.
```

**Sample Input**:
```
Enter the size: 3
```
**Sample Output**:
```
1 2 3
8 9 4
7 6 5
```
**Code**:
```
#include <stdio.h>
int main()
{
    int n;
    printf("enter the size: ");
    scanf("%d", &n);
    int arr[n][n];
    int num = 1;
    int top = 0, left = 0, right = n - 1, bottom = n - 1;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            arr[top][i] = num++;
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            arr[i][right] = num++;
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                arr[bottom][i] = num++;
            }
            bottom--;
            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                {
                    arr[i][left] = num++;
                }
                left++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
```
35. String Methods/Functions
**Problem Statement**
Implement various string manipulation functions such as strcpy(), strlen(), sizeof(), strcat(), and strcmp().

**Algorithm**
```
1.Initialize the source string sample[] and destination string two[].
2.Use strcpy() to copy the contents of sample[] to two[].
3.Print the length of sample[] using strlen().
4.Print the size of sample[] using sizeof().
5.Use strcat() to concatenate strings.
6.Compare two strings using strcmp().
```

**Sample Input**
```
No input required.
```

**Sample Output**
```
abcdefghijkl
12
14
```

**Solution**
```
#include <stdio.h>
#include <string.h>
int main()
{
    char sample[]="abcdefghijkl";
    char two[20];
    strcpy(two, sample); // Copying sample to two
    printf("%s\n", two);
    printf("%d\n", strlen(sample)); // String length
    printf("%d\n", sizeof(sample)); // Size with '\0'
    
    // Concatenate
    char a[30] = "njkhsjahjbchb";
    strcat(a, sample);
    printf("%s \n", a);
    
    // Compare
    char one[20] = "abcdefgh";
    char twoComp[20] = "abcdefgh";
    printf("%d\n", strcmp(one, twoComp));  // 0 if equal
    return 0;
}
```

36. Strong Number (Krishna Murthy Number)
**Problem Statement**
Check if a given number is a Strong number. A Strong number is a number where the sum of the factorial of its digits is equal to the number itself.

**Algorithm**
```
1.Read the number.
2.For each digit, calculate its factorial.
3.Sum the factorials of all digits.
4.Compare the sum with the original number.
```

**Sample Input**
```
145
```
**Sample Output**
```
yes
```
**Solution**
```
#include <stdio.h>
int main()
{
   int num, sum = 0, rem, onum, fact;
   printf("enter num : ");
   scanf("%d", &num);
   onum = num;
   while (num > 0)
   {
       rem = num % 10;
       fact = 1;
       for (int i = 1; i <= rem; i++)
       {
           fact = fact * i;
       }
       sum += fact;
       num /= 10;
   }
   
   if (sum == onum)
   {
       printf("yes");
   }
   else
   {
       printf("no");
   }
   return 0;
}
```

37. Summation of Two Complex Numbers
**Problem Statement**
Write a program to add two complex numbers.

**Algorithm**
```
1.Define a complex structure to hold real and imaginary parts.
2.Define a function to add two complex numbers.
3.Print the result.
```

**Sample Input**
```
 x=1 + 2i
 y=3 + 4i
```

**Sample Output**
```
sum=4 + 6i
```
**Solution**
```
#include <stdio.h>
typedef struct complexNumber
{
    int real;
    int img;
} complex;

complex add(complex x, complex y)
{
    complex add;
    add.real = x.real + y.real;
    add.img = x.img + y.img;
    return add;
}

int main()
{
    complex x, y, sum;
    x.real = 1;
    x.img = 2;
    y.real = 3;
    y.img = 4;
    printf("x=%d + %di\n", x.real, x.img);
    printf("y=%d + %di\n", y.real, y.img);
    sum = add(x, y);
    printf("\n sum=%d + %di", sum.real, sum.img);
    return 0;
}
```

38. Swapping Two Numbers in a Single Line
**Problem Statement**
Swap two numbers without using a temporary variable.

**Algorithm**
```
1.Read two numbers.
2.Swap the numbers using the formula a = (a + b) - (b = a).
3.Print the swapped values.
```

**Sample Input**
```
a=5, b=10
```
**Sample Output**
```
a=10, b=5
```
**Solution**
```
#include <stdio.h>
int main()
{
   int a, b;
   printf("enter 2 numbers : ");
   scanf("%d %d", &a, &b);
   printf("before swapping :a=%d,b=%d\n", a, b);
   if (a != 0 && b != 0)
   {
      a = (a + b) - (b = a);
      printf("after swapping : a=%d,b=%d", a, b);
   }
   else
   {
       printf("enter non-zero numbers");
   }
   return 0;
}
```

39. Swapping Using Arithmetic Operators
**Problem Statement**
Swap two numbers using addition and subtraction.

**Algorithm**
```
1.Read two numbers.
2.Swap the numbers using the following steps:
a = a + b;
b = a - b;
a = a - b;
3.Print the swapped values.
```
**Sample Input**
```
a=5, b=10
```
**Sample Output**
```
a=10, b=5
```
**Solution**
```
#include <stdio.h>
int main()
{
   int a, b;
   printf("enter 2 numbers : ");
   scanf("%d %d", &a, &b);
   printf("before swapping :a=%d,b=%d\n", a, b);
   if (a != 0 && b != 0)
   {
      a = a + b;
      b = a - b;
      a = a - b;
      printf("after swapping : a=%d,b=%d", a, b);
   }
   else
   {
       printf("enter non-zero numbers");
   }
   return 0;
}
```

40. Swapping Using Multiplication and Division
**Problem Statement**
Swap two numbers using multiplication and division.

**Algorithm**
```
1.Read two numbers.
2.Swap the numbers using the following steps:
a = a * b;
b = a / b;
a = a / b;
3.Print the swapped values.
```

**Sample Input**
```
a=5, b=10
```
**Sample Output**
```
a=10, b=5
```
**Solution**
```
#include <stdio.h>
int main()
{
   int a, b;
   printf("enter 2 numbers : ");
   scanf("%d %d", &a, &b);
   printf("before swapping :a=%d,b=%d\n", a, b);
   if (a != 0 && b != 0)
   {
      a = a * b;
      b = a / b;
      a = a / b;
      printf("after swapping : a=%d,b=%d", a, b);
   }
   else
   {
       printf("enter non-zero numbers");
   }
   return 0;
}
```

41. Swapping Using Bitwise XOR
**Problem Statement**
Swap two numbers using the XOR bitwise operator.

**Algorithm**
```
1.Read two numbers.
2.Swap the numbers using XOR:
a = a ^ b;
b = a ^ b;
a = a ^ b;
3.Print the swapped values.
```

**Sample Input**
```
a=5, b=10
```
**Sample Output**
```
a=10, b=5
```
**Solution**
```
#include <stdio.h>
int main()
{
   int a, b;
   printf("enter 2 numbers : ");
   scanf("%d %d", &a, &b);
   printf("before swapping :a=%d,b=%d\n", a, b);
   if (a != 0 && b != 0)
   {
      a = a ^ b;
      b = a ^ b;
      a = a ^ b;
      printf("after swapping : a=%d,b=%d", a, b);
   }
   else
   {
       printf("enter non-zero numbers");
   }
   return 0;
}
```
42. Swapping Two Numbers Using Pointers
**Problem Statement**
Write a program to swap two numbers using pointers.

**Algorithm**
```
1.Read two numbers a and b.
2.Use pointers p1 and p2 to point to a and b, respectively.
3.Swap the values using a temporary variable temp.
4.Print the swapped values.
```

**Sample Input**
```
a = 5, b = 10
```
**Sample Output**
```
After swapping:
a = 10
b = 5
```
**Solution**
```
#include <stdio.h>
int main()
{
    int a, b, *p1, *p2, temp;
    printf("Enter the values of a and b: ");
    scanf("%d%d", &a, &b);
    p1 = &a;
    p2 = &b;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
```
43. Swapping the First and Last Digits of a Given Number
**Problem Statement**
Write a program to swap the first and last digits of a given number.

**Algorithm**
```
1.Read the number num.
2.Extract the first digit using logarithm and the last digit using modulo.
3.Swap the first and last digits.
4.Print the swapped number.
```

**Sample Input**
```
num = 12345
```
**Sample Output**
```
52341
```
**Solution**
```
#include <stdio.h>
#include <math.h>
int main()
{
    int num, first, last, digit, swapped;
    printf("Enter num: ");
    scanf("%d", &num);
    digit = (int)log10(num);
    first = num / pow(10, digit);
    last = num % 10;
    swapped = last * pow(10, digit) + (num % (int)pow(10, digit) - last) + first;
    printf("%d", swapped);
    return 0;
}
```

44. Tail Recursion
**Problem Statement**
Write a program to demonstrate tail recursion.

**Algorithm**
```
1.Define a recursive function tail() to print numbers from n down to 1.
2.In each recursive call, decrement n and print the current value.
3.Base case: stop recursion when n becomes 0.
```
**Sample Input**
```
n = 6
```
**Sample Output**
```
654321
```
**Solution**
```
#include <stdio.h>
int tail(int n) // Tail Recursion
{
    if(n == 0)
        return;
    printf("%d", n);
    tail(n - 1);
}
int main()
{
    tail(6);
    return 0;
}
```

45. Finding Terms in a Given Series (0,0,7,6,14,12,18,...)
**Problem Statement**
Find the 14th and 15th terms in the series: 0, 0, 7, 6, 14, 12, 18,...

**Algorithm**
```
1.Check if the term index n is odd or even.
2.If n is odd, multiply the index by 7.
3.If n is even, multiply the index by 6 and subtract 6.
4.Print the result.
```

**Sample Input**
```
n = 14
```
**Sample Output**
```
84
```
**Solution**
```
#include <stdio.h>
#include <math.h>
int main()
{
    int n, x;
    printf("Enter n: ");
    scanf("%d", &n);
    if (n % 2 == 1)
    {
        x = 7 * (n / 2);
        printf("%d", x);
    }
    else
    {
        x = 6 * ((n / 2) - 1);
        printf("%d", x);
    }
    return 0;
}
```

46. Tree Recursion
**Problem Statement**
Demonstrate tree recursion by printing numbers.

**Algorithm**
```
1.Define a recursive function tree() to print numbers from n down to 1.
2.Call the function recursively twice for each n value.
3.Stop recursion when n reaches 0.
```

**Sample Input**
```
n = 3
```
**Sample Output**
```
3 2 1 1 2 1 1
```
**Solution**
```
#include <stdio.h>
void tree(int n)
{
    if(n == 0)
        return;
    printf("%d ", n);
    tree(n - 1);
    tree(n - 1);
}
int main()
{
    tree(3);
    return 0;
}
```

47. Usage of Pointers in Arrays
**Problem Statement**
Demonstrate the usage of pointers to print the addresses of elements in an array.

**Algorithm**
```
1.Define an array num[] with 6 elements.
2.Use pointers to print the memory addresses of each element in the array.
```
**Sample Input**
```
No input required.
```
**Sample Output**
```
Address of num[0]: <address>
Address of num[1]: <address>
Address of num[2]: <address>
Address of num[3]: <address>
Address of num[4]: <address>
Address of num[5]: <address>
```
**Solution**
```
#include <stdio.h>
int main()
{
   int num[6] = {100, 200, 500, 800, 300, 600};
   int i;
   for(i = 0; i < 6; i++)
   {
       printf("%p\n", &num[i]);
   }
   return 0;
}
```
48. Zig-Zac Pattern
**Problem Statement**
Write a program to print a Zig-Zac pattern using *.

**Algorithm**
```
1.Loop through 3 rows.
2.For each row, print a * at positions where the sum of the row and column index is divisible by 4 or when the row is 2 and the column index is divisible by 4.
3.Print spaces at other positions.
```
**Sample Input**
```
n = 7
```
**Sample Output**
```
 *   * 
  * *  
 *   * 
```
**Solution**
```
#include <stdio.h>
int main()
{
    int n, j;
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i = 1; i <= 3; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if((i + j) % 4 == 0 || (i == 2 && j % 4 == 0))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
```

