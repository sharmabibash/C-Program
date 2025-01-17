
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
/*#include <stdio.h>
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
}*/

// WAP to display if your age is greater than 18 then you can vote else your age is below 18 then you can't vote.
/*#include <stdio.h>

int main() {
    int vote;
    printf("Enter your age: ");
    scanf("%d", &vote);
    if (vote > 18) {
        printf("You can vote");
    } else {
        printf("You cannot vote");
    }
    getchar();
    getchar();
}
*/
// Check Pass or Fail Write a C program that takes a student's score as input and checks
// if the score is 50 or higher. If the score is 50 or higher, print "You passed the exam."
/*#include<stdio.h>
int main()
{
    int score;
    printf("enter score");
    scanf("%d",&score);
    if (score > 50)
    {
              printf("you passed the exam");
              }else{
                    printf("you fail the exam");
                    }
              getchar();
              getchar();
    }
*/
// 2.	Check Even or Odd Write a C program to check if a given integer is even. If it is even, print "The number is even."

/*#include <stdio.h>
int main()
{
    int num;
    printf("Enter number to check odd or even ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}
*/

// WAP in C Take marks of 4 subject then find its total marks, percentage, if percentage is greater than 40 then display Passed in remarks , else failed.
/*#include <stdio.h>
int main()
{
    int eng, nep, math, sci, total;
    float per;
    printf("Marks of English : ");
    scanf("%d", &eng);
    printf("Marks of Nepali : ");
    scanf("%d", &nep);
    printf("Marks of Math : ");
    scanf("%d", &math);
    printf("Marks of Science : ");
    scanf("%d", &sci);
    total = eng + nep + math + sci;
    per = (float)total / 4;
    printf("Total : %d", total);
    printf("\nPercentage : %f", per);
    if (per < 40)
    {
        printf("\nFailed");
    }
    else
    {
        printf("\nPassed");
    }
}*/

// Take integer number from user and convert it into float.
/*#include <stdio.h>
int main()
{
    int num;
    float usha;
    printf("enter number ");
    scanf("%d", &num);
    usha = (float)num;
    printf("%f", usha);

    getchar();
    getchar();
}
*/