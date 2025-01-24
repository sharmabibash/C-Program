// Define Pointer
/*
A pointer is a variable that stores the memory addres of another variable.it provides indirect access to a variables value through its memory address.

declaration data_type *pointer_name;
*/

// Declaration and initialization
/*#include <stdio.h>
int main()
{
    int n = 20; // 1st var
    int *ptr;   // 2nd var
    *ptr = &n;

    printf("Num =%d\n", n);
    printf("Address of num : %p\n", ptr);
    printf("Value of num : %d", *ptr);
}*/

// Pointer and Arithmetic.

/*#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40};
    int *usha = arr;

    printf("First element : %d\n", *usha);
    usha++;  // first
    printf("Second element = %d\n", *usha);
    usha++;  // second
    printf("Third element : %d\n", *usha);
    usha++;  // third
    printf("Fourth element : %d\n", *usha);
}*/

// WAP in C add two numbers using pointer which is given by user.
/*#include <stdio.h>
int main()
{
    int a, b, sum;
    int *x, *y, *ptrSum;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);

    x = &a;
    y = &b;
    ptrSum = &sum;

    *ptrSum = *x + *y;
    printf("Sum of %d and %d is : %d\n", *x, *y, *ptrSum);
}*/