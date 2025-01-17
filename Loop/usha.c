

// loop
// do while
// while loop
// for loop

/*
Four important points of looping.
1. Initialization  int i = 0;
2. test condition  i <=n;
3. body of loop
4. update expression i++;
*/

/*
increment & decrement
1. a++ ---> increment
2. ++a ---> increment
3. a--  ----> decrement
4. --a  ---> decrement
*/

// while loop
// WAP to find sum of n natural numbers using while loop.
/*#include <stdio.h>
int main()
{
    int n, sum = 0, a;
    printf("Enter any positive numbers : ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Please enter positive number ");
        return 0;
    }
    while (a <= n)
    {
        // sum = sum + a;
        sum += a;
        a++;
    }
    printf("Sum is %d", sum);
}*/

// same question using do while
/*#include <stdio.h>
int main()
{
    int n, sum = 0, a;
    printf("Enter positive number : ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Please enter positive number ");
        return 0;
    }
    do
    {
        sum = sum + a;
        a++;
    } while (a <= n);
    printf("Sum is %d", sum);
}*/

// for loop
/*#include <stdio.h>
int main()
{
    int n, sum = 0, a;
    printf("Enter any number : ");
    scanf("%d", &n);
    for (a = 1; a <= n; a++)
    {
        sum = sum + a;
    }
    printf("%d", sum);
}*/
/*
note : in for loop initialization is compulsory
*/

// Loop questions Pattern Print.
/*
1
12
123
1234
12345*/

/*#include <stdio.h>
int main()
{
    int i, j, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}*/

#include <stdio.h>
int main()
{
    int i, j, k, n = 4;
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= n; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= (2 * i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
}