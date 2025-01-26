//assigning the pointer to variable
/*
"Problem Statement:"
Write a program to demonstrate how to assign a pointer to a variable and access the variable's value 
and address using the pointer. The program should declare an integer variable, 
assign its address to a pointer, and display the variable's value, address, and the pointer's value.
"Algorithm:"
1.Start.
2.Declare an integer variable num and initialize it with a value (e.g., 100).
3.Declare a pointer ptr of type int* and assign the address of num to it using the & operator.
4.Print the value of num directly.
5.Print the address of num using the &num.
6.Print the value of the pointer ptr (which should hold the address of num).
7.End.*/
#include <stdio.h>
int main()
{
    int num=100;
    int *ptr=&num;
    printf("%d\n",num);
    printf("%p\n",&num);
    printf("%p\n",ptr);
    return 0;
}
