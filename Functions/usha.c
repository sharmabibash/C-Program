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