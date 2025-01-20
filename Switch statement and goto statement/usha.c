// switch(char='U')== ON
// it is also decision making statement.
// syntax of switch statement
/*switch (expression)
{
case 1:
    Satatement 1;
    break;

    case 2:
    Satatement 2;
    break;

default:
    break;
}*/

// break ---> for not skip
// continue ---> skip

// Wap in c to display name of 7 days in a week. using switch statement

/*#include <stdio.h>
int main()
{
    int n;
    printf("Enter respective number of days to display its name : ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Invalid");
    }
}*/

// only fo usha
/*#include<stdio.h>
int main(){
int n;
printf("enter respective number of days to display its name:");
scanf("%d",&n);
switch(n)
{
         case 1:
               printf("sunday");
               break;
               case 2:
                    printf("monday");
                    default:
                            printf("invalid");
                            }
                            getchar();
                            getchar();
}
*/

// go to statement :
// WAP to add two numbers which is enterd by user.
/*#include <stdio.h>
int main()
{
    int a, b, add;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter the second number : ");
    scanf("%d", &b);
    goto usha;

usha:
    add = a + b;
    printf("%d is sum ", add);
}*/