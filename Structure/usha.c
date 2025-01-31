/*1. Create a structure named student that has name, roll,
marks and remarks as members. Write a program using structure to read
and display the data entered by the user.*/
/*#include <stdio.h>
struct student
{
    char name[200];
    int roll;
    float marks;
    char remarks[100];
} u;
int main()
{
    // struct student u;
    printf("Enter your name : ");
    // scanf("%s", u.name);
    gets(u.name);
    printf("Enter your roll : ");
    scanf("%d", &u.roll);
    printf("Enter marks : ");
    scanf("%f", &u.marks);
    printf("Enter Remarks : ");
    scanf("%s", u.remarks);

    printf("\nYour data are displayed below : \n");
    printf("Name : %s \n Roll : %d \n Marks : %f \n Remarks : %s \n", u.name, u.roll, u.marks, u.remarks);
    // printf("Roll No. : %d \n", u.roll);
    // printf("Marks : %f \n", u.marks);
    // printf("Remarks : %s \n", u.remarks);
    return 0;
}*/

/*2. Create a structure named student that has name, roll,
marks and remarks as members. Write a program using structure to read
and display the records of n students.*/
#include <stdio.h>

struct student
{
    char name[100];
    int roll;
    float marks;
    char remarks[100];
};

int main()
{
    struct student u[200];
    int i, n;

    printf("Enter number of students: ");
    scanf("%d", &n);
    while (getchar() != '\n')
        ;

    for (i = 0; i < n; i++)
    {
        printf("Enter name: ");
        // fgets(u[i].name, sizeof(u[i].name), stdin);
        gets(u[i].name);

        printf("Enter Roll: ");
        scanf("%d", &u[i].roll);
        while (getchar() != '\n')
            ;

        printf("Enter Marks: ");
        scanf("%f", &u[i].marks);
        while (getchar() != '\n')
            ;

        printf("Enter Remarks: ");
        // fgets(u[i].remarks, sizeof(u[i].remarks), stdin);
        gets(u[i].remarks);
    }

    printf("\nData are displayed below\n");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        printf("Name: %s\n", u[i].name);
        printf("Roll: %d\n", u[i].roll);
        printf("Marks: %f\n", u[i].marks);
        printf("Remarks: %s\n", u[i].remarks);
    }

    return 0;
}