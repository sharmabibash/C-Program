
// if (condition) ---> it is a decision making statement

// if(conditon) === true then print output
// if (conditon) ==== false then print fail condition

/*Algorithm:-
start :
1. varibles or input
check
check == true then true print
check == false then false print */

/*
syntax of if (condition)
if(condition==true){
printf("True");
}
*/

// Q.1. WAP to check input number by user is greater than 5.
/*#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number to check if given number is greater than 5 : ");
    scanf("%d", &num);
    if (num > 5)
    {
        printf("%d is greater than 5", num);
    }
}
*/
// a > b : greater
// a < b : less
// a == b : equality
// a >= b : greater and equal
// a <= b : less and equal

// 1.	Check Positive Number Write a C program that takes an integer input from the user and checks if the number is positive. If it is Positive,Negative,Zero, print "The number is Positive,Negative,Zero"

/*#include <stdio.h>
int main()
{
    int x;
    printf("Enter any number to check ,Positive,Negative,Zero : ");
    scanf("%d", &x);
    if (x == 0)
    {
        printf("Zero");
    }
    else if (x < 0)
    {
        printf("Negative");
    }
    else
    {
        printf("Positive");
    }
    return 0;
}
*/
// Q.3 WAP to show hot day if temperature is greater than 30 degree celcius.
#include <stdio.h>
int main()
{
    int temp;
    printf("Enter temperature : ");
    scanf("%d", &temp);
    if (temp > 30)
    {
        printf("Hot day ");
    }
    else
    {
        printf("Not specified");
    }
}