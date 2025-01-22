// Array -->
/*
Declaration Arr[20]
example : int a[20],float a[20], char a[20]......
The size of an araay is always fixed...
example: int arr[100] ---> here 100 is fixed size of that array.
Array always start from elements zero....
example : a[20]   ---> a[0],a[1],a[2].... so on
it store data in different memory loaction at a time.

input of an array a[20] ----> scanf("%d",&a[i]);
*/

//  WAP in C store n numbers in an array and display it.
/*#include <stdio.h>
int main()
{
    int a[100], n, i;
    printf("Enter how many numbers do you want inser in that array max(100) : ");
    scanf("%d", &n);
    printf("Start Inserting data : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Inserted Data : \n ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}*/

// WAP in c to store n number in an array and sorting it in ascending order and descending order.

/*#include <stdio.h>
int main()
{
    int a[100], j, temp, n, i;
    printf("Enter how many number do you want store for sorting max [100] : ");
    scanf("%d", &n);
    printf("Start inserting data :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Sorted in Ascending order :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("Sorted in Descending order :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}*/

// 2-D Array

/*
2-D array
a[10][20];
*/

/*WAP in c to store 2-D array and add two matrices*/
/*#include <stdio.h>

int main()
{
    int matA[20][20], matB[20][20], sum[20][20], i, j, row, col;

    printf("Enter row for matrix: ");
    scanf("%d", &row);
    printf("Enter column for matrix: ");
    scanf("%d", &col);

    printf("Insert data for Matrix A:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &matA[i][j]);
        }
    }

    printf("Insert data for Matrix B:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &matB[i][j]);
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            sum[i][j] = matA[i][j] + matB[i][j];
        }
    }

    printf("Sum of Matrix A and Matrix B:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/