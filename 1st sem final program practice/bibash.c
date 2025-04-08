/*WAP in C to display nth term of the Fibonacci series.*/
/*#include<stdio.h>
int Fibbo(int n);
int main(){
    int n;
    printf("Enter the number of term of fibonacci series : ");
    scanf("%d",&n);
    printf("The %d th term of fibonacci series %d",n,Fibbo(n));
    return 0;
}
Fibbo(int n){
    if(n<=0){
        return 0;
    }

    int first=0,second=1,third;
    int i=1;
    do{

        if(i==1){
            printf("%d\t",first);
        }else if(i==2){
            printf("%d\t",second);
        }else{
            third=first+second;
            printf("%d\t",third);
            first=second;
            second=third;
        }

        i++;
    }while(i<=n);
    printf("\n");
    return second;

}*/

/*Pattern Print
5
54
543
5432
54321
*/
/*#include<stdio.h>
int main(){
    int i,j;
    int n=5;
    for(i=1;i<=n;i++){

        for(j=0;j<i;j++){
            printf("%d",n-j);
        }
        printf("\n");
    }
}*/

/*
12345
2345
345
45
5
*/
/*#include<stdio.h>
int main(){
    int i,j;
    int n=5;
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}*/

/*
1
12
123
1234
12345
*/
/*#include<stdio.h>
int main(){
    int i,j;
    int n=5;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}*/

/*
54321
4321
321
21
1
*/
/*#include<stdio.h>
int main(){
    int j,i,n=5;
    for(i=5;i>0;i--){
        for(j=i;j>0;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}*/

/*WAP in C to read 1D array and check whether the largest element is even or odd*/
/*#include<stdio.h>

int main() {
    int a[100];
    int i, n, j, temp;

    printf("Enter number of elements in an array max(100): ");
    scanf("%d", &n);

    printf("\nStart entering data : \n");
    for(i = 0; i < n; i++) {
        printf("a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    // Display entered data
    for(i = 0; i < n; i++) {
        printf("Entered data a[%d] : %d\n", i, a[i]);
    }

    // sorting in ascending order (bubble sort)
    for(i = 0; i < n-1; i++) {
        for(j = 0; j < n-i-1; j++) {
            if(a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("\nSorted in Ascending order :\n");
    for(i = 0; i < n; i++) {
        printf("a[%d] : %d\n", i, a[i]);
    }


    if(n >= 4) {
        int fourth_largest = a[n-4];  // Since array is sorted in ascending order
        printf("\nFourth largest is a[%d]: %d\n", n-4, fourth_largest);
        if(fourth_largest % 2 == 0) {
            printf("Fourth largest %d is Even\n", fourth_largest);
        } else {
            printf("Fourth largest %d is Odd\n", fourth_largest);
        }
    } else {
        printf("\nArray has less than 4 elements. Cannot find fourth largest.\n");
    }

    int largest = a[n-1];
    int largest_index = n-1;
    printf("\nLargest is a[%d]: %d\n", largest_index, largest);
    if(largest % 2 == 0) {
        printf("Largest %d is Even\n", largest);
    } else {
        printf("Largest %d is Odd\n", largest);
    }

    int smallest = a[0];
    int smallest_index = 0;
    printf("\nSmallest is a[%d]: %d\n", smallest_index, smallest);
    if(smallest % 2 == 0) {
        printf("Smallest %d is Even\n", smallest);
    } else {
        printf("Smallest %d is Odd\n", smallest);
    }

    return 0;
}*/

// above problem using function.

/*#include <stdio.h>

void sortASC(int a[], int n);
void inputFunction(int a[], int *n);
void outputFunction(int a[], int n);
void nthLarge_nthsmall(int a[], int n);

int main()
{
    int a[100], n;
    int b;
    int c;
    inputFunction(a, &n);
    sortASC(a, n);
    outputFunction(a, n);
    Largest(a, n);
    Smallest(a,n);

    nthLarge_nthsmall(a,n);
    return 0;
}
    


void inputFunction(int a[], int *n)
{
    int i;
    printf("Enter how many numbers you want to read? max(100): ");
    scanf("%d", n); // & is not use for pointer
    printf("Start inserting data:\n");
    for (i = 0; i < *n; i++)
    {
        printf("Data for a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nEntered data:\n");
    for (i = 0; i < *n; i++)
    {
        printf("a[%d]: %d\n", i, a[i]);
    }
}

void sortASC(int a[], int n)
{
    int temp, i, j;
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
}

void outputFunction(int a[], int n)
{
    int i;
    printf("\nSorted in ascending order \n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] : %d\n", i, a[i]);
    }
}

void Largest(int a[], int n)
{
    int i;
    int largest = a[0];
    int largestIndex = 0;
    printf("\n");
    for (i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
            largestIndex = i;
        }
    }
    printf("Largest is a[%d] : %d \n", largestIndex, largest);
    if(largest%2==0){
        printf("Largest %d is even\n",largest);
    }else{
        printf("Largest %d is odd\n",largest);
    }
}

void Smallest(int a[], int n)
{
    int i;
    int smallest = a[0];
    int smallestIndex = 0;
    printf("\n");
    for (i = 1; i < n; i++)
    {
        if (a[i] < smallest)
        {
            smallest = a[i];
            smallestIndex = i;
        }
    }
    printf("Smallest is a[%d] : %d \n", smallestIndex, smallest);
    if(smallest%2==0){
        printf("Smallest %d is even\n",smallest);
    }else{
        printf("Smallest %d is odd\n",smallest);
    }
}

void nthLarge_nthsmall(int a[], int n){
    int b,c;
    printf("Enter which largest do want find eg: 1,2,3.... :\n");
    scanf("%d",&b);
    printf("Enter which smallest do want find eg: 1,2,3.... :\n");
    scanf("%d",&c);
    if(n>n-1){
        int nLarge=a[n-b];
        printf("%d largest is %d \n",b,nLarge);

    }
    if (c >= 1 && c <= n) {
        int nthSmallest = a[c - 1]; // Since sorted in ascending order
        printf("%d smallest is %d\n", c, nthSmallest);
    } else {
        printf("Invalid input for smallest.\n");
    }
}*/

// WAP in C to Concate two string

/*#include<stdio.h>
void concate(char str1[], char str2[], char result[]){
    int i=0,j=0;
    while(str1[i]!='\0'){
        result[i]=str1[i];
        i++;
    }
    while(str2[j]!='\0'){
        result[i]=str2[j];
        i++;
        j++;
    }
    result[i]='\0';
}

int main(){
    char str1[20],str2[20],result[40];
    printf("Enter first string : ");
    scanf("%s",str1);
    printf("Enter Second string : ");
    scanf("%s",str2);
    concate(str1,str2,result);
    printf("Concatenated string is : %s",result);
}*/

// Write a c program to duplicate the content of one string variable to another manually, without using predefined string function.

/*#include<stdio.h>
void duplicate(char real[],char copy[]){
    int i=0;
    while(real[i]!='\0'){
        copy[i]=real[i];
        i++;
    }
    copy[i]='\0';
}
int main(){
    char real[20],copy[20];
    printf("Enter real string : ");
    scanf("%s",real);
    duplicate(real,copy);
    printf("Real string : %s \n",real);
    printf("Duplicate String is : %s",copy);
}*/

// Write a c program that reverse a given integer number . The number should be passed from main function processed in userdefined function and then display back in main function.

#include<stdio.h>
int reverse(int n){
    int rem,rev=0;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;

}
int main(){
    int n;
    printf("Enter the number do you want to reverse : ");
    scanf("%d",&n);
    int num=reverse(n);
    
    printf("Reversed number is : %d",num);

    if(num==n){
        printf("\nPalindrome : %d",num);
    }else{
        printf("\nNot plaindrome : %d ",num);
    }
}