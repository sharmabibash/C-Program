// the function which is already define on compiler it is called primary function or in-built function.  example : printf(),scanf(),sqrt(),strlen(),strupr() etc
// The function which is defined by user for specific task is called user-define function or secondary function.

/*1. Function without Parameters and without Return Value*/
/*#include <stdio.h>
void greet()
{
    printf("Usha\n");
}
int main()
{
    greet(); // Calling the user-defined function
    return 0;
}
*/

// 2. Function with Parameters and without Return Value
/*
void printSum(int a, int b) {
    printf("Sum: %d\n", a + b);
}

*/

// 3. Function with Parameters and with Return Value

/*
int multiply(int a, int b) {
    return a * b;
}
*/

// 4. Function without Parameters and with Return Value

/*
int getNumber() {
    return 42;
}
*/

/*
summary
a. without parameters and without  return value.
b. without parameters and with return value.
c. with parameters and without return value.
d. with parametrs and with return value.
*/

// WAP in c to add two numbers using function. non- returning

/*#include <stdio.h>
void sum(int x, int y);
int main()
{
    int a, b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    sum(a, b);
}
void sum(int x, int y)
{
    int add;
    add = x + y;
    printf("%d is add", add);
}*/

// for returning
/*#include <stdio.h>
int sum(int x, int y)
{
    int add = x + y;
    return add;
}
int main()
{
    int a, b, c;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    c = sum(a, b);
    printf("%d is add", c);
}*/

// Call by value
/*
a. in call by value, a copy of variable is passed to the function.
b. changes made inside the function do not affect on original function.

*/

/*#include <stdio.h>
void modifyValue(int x)
{
    x = x * 2;
    printf("Inside function (call by value): %d\n", x);
}
int main()
{
    int num = 10;
    printf("Before function call : %d\n", num);
    modifyValue(num);
    printf("After function call : %d\n", num);
}*/

// call by reference
/*
a. C doesn't support Call by reference directly. However, we can achieve this behavior by passing the address (pointer) of the variable to the function.
b. Changes made inside the function affect the original function.
*/

// Declaration of pointer ----> int *x, int *y, char *a[10] etc
/*#include <stdio.h>
void modifyValue(int *x)
{
    *x = *x * 2;
    printf("Inside function (call by reference) : %d\n", *x);
}
int main()
{
    int num = 10;
    printf("Before function call : %d\n", num);
    modifyValue(&num);
    printf("After call function : %d\n", num);
    return 0;
}*/

// WAP to swaping two varibales without using pointer and function.(call by value)
/*#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    printf("Before swap a=%d,b=%d\n", a, b);
    swap(a, b);
}
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swap a=%d,b=%d\n", a, b);
}*/

// WAP to swaping two varibales using pointer and function. (call by reference)
/*#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    printf("Before swap a=%d,b=%d", a, b);
    swap(&a, &b);
    printf("\nAfter swap a=%d,b=%d", a, b);
}*/