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

/*#include <stdio.h>

int reverse(int n) {
    int rem, rev = 0;
    while(n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return rev;
}

int Armstrong(int n) {
    int original = n;
    int sum = 0;
    int digits = 0;
    int temp = n;

    while(temp != 0) {
        temp = temp / 10;
        digits++;
    }

    temp = original;
    while(temp != 0) {
        int rem = temp % 10;
        int power = 1;
        // Manually calculate rem^digits
        for(int i = 0; i < digits; i++) {
            power *= rem;
        }
        sum += power;
        temp = temp / 10;
    }

    return (original == sum);
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int reversed = reverse(n);
    printf("Reversed number is: %d\n", reversed);

    if(reversed == n) {
        printf("Palindrome: Yes\n");
    } else {
        printf("Palindrome: No\n");
    }

    if(Armstrong(n)) {
        printf("Armstrong: Yes\n");
    } else {
        printf("Armstrong: No\n");
    }

    return 0;
}
*/

/*
Write a program to read and store campus details such as name,address,established year, number of students in a structure called IOE. Input data for 5 campuses. pass the structure variable to a function and print the name and established year of the campus which has more than 500 students.
*/
/*#include <stdio.h>
struct IOE {
    char name[20];
    char address[20];
    int estd;
    int total_students;
};

void record(struct IOE *ioe, int n);

int main() {
    struct IOE ioe[5];
    int n = 5;
    int i;

    printf("Enter details for 5 campuses:\n");

    for(i = 0; i < n; i++) {
        printf("\nCampus %d:\n", i+1);
        printf("Enter name: ");
        scanf(" %[^\n]", ioe[i].name);

        printf("Enter Address: ");
        scanf(" %[^\n]", ioe[i].address);

        printf("Enter Established Year: ");
        scanf("%d", &ioe[i].estd);

        printf("Total Students: ");
        scanf("%d", &ioe[i].total_students);
    }

    printf("\nCampuses with more than 500 students:\n");
    record(ioe, n);

    return 0;
}

void record(struct IOE *ioe, int n) {
    int found = 0;
    for(int i = 0; i < n; i++) {
        if(ioe[i].total_students > 500) {
            printf("Name: %s\n", ioe[i].name);
            printf("Established Year: %d\n\n", ioe[i].estd);
            found = 1;
        }
    }
    if(!found) {
        printf("No campuses found with more than 500 students.\n");
    }
}
*/

// sort an array using pointer

/*#include<stdio.h>
void sort(int *arr, int n){
    int temp;
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(*(arr+j)>*(arr+j+1)){
                temp=*(arr+j);
                *(arr+j)=*(arr+j+1);
                *(arr+j+1)=temp;
            }
        }
    }
}

int main(){
    // int arr[];
    int n,i;
    printf("Enter number : ");
    scanf("%d",&n);
    int arr[n];
    printf("Start inserting data \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Sorted in asc \n");
    sort(arr,n);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}*/

// swapping two variables using pointer.

/*#include<stdio.h>
int swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
int a,b;
printf("Enter first num : ");
scanf("%d",&a);
printf("Enter first sec : ");
scanf("%d",&b);
printf("Before swap \n");
printf("a=%d | b=%d",a,b);

printf("\nAfter swap\n");
swap(&a,&b);
printf("a=%d | b=%d",a,b);

}*/

/*
WAP in c to create a structure named BOOK with its member Name and Price. input 10 records of book. create a function named maxPrice() which displays the record with the maximum price. the entire structure to the function is passed from main.
*/
/*#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct BOOK {
    char name[20];
    int price;
};

void maxPrice(struct BOOK *b, int n) {
    struct BOOK temp;
    int i, j;
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(b[j].price < b[j + 1].price) {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    int i;

    printf("Enter how many records do you want to store: ");
    scanf("%d", &n);

    struct BOOK b[n];

    getchar();

    printf("Enter records:\n");
    for(i = 0; i < n; i++) {
        printf("Enter book name: ");
        scanf("%[^\n]", b[i].name);
        getchar();

        printf("Enter book price: ");
        scanf("%d", &b[i].price);

        getchar();
    }

    printf("\nData displayed by max price:\n");
    maxPrice(b, n);

    for(i = 0; i < n; i++) {
        printf("\nName: %s", b[i].name);
        printf("\nPrice: %d\n", b[i].price);
    }

    return 0;
}
*/

/*
Write a program in c that creates a structure name VEHICLE with its member year, brandName. Read n number of vehicle information and write it to a file named vehicle.dat
*/

/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct VEHICLE {
    int year;
    char brandName[20];
};

int main(){
    // struct VEHICLE v[n];
    int n;
    printf("Enter number of records : ");
    scanf("%d",&n);
    struct VEHICLE v[n];

    getchar();

    FILE *fp;
    fp=fopen("vehicle.dat","wb");

    if(fp==NULL){
        printf("Unable to open");
        return 1;
    }
    for(int i = 0; i < n; i++) {
        printf("Enter vehicle %d information:\n", i + 1);
        printf("Enter year: ");
        scanf("%d", &v[i].year);
        getchar();

        printf("Enter brand name: ");
        scanf("%[^\n]", v[i].brandName);
        getchar();

        fwrite(&v[i],sizeof(struct VEHICLE),1,fp);
    }
    fclose(fp);
    printf("Records has been saved !");

    struct VEHICLE readV[n];

    fp = fopen("vehicle.dat", "rb"); // open for reading in binary
    if (fp == NULL) {
        printf("Unable to open file for reading\n");
        return 1;
    }

    fread(readV, sizeof(struct VEHICLE), n, fp);
    fclose(fp);

    printf("\nRecords from file:\n");
    for (int i = 0; i < n; i++) {
        printf("Vehicle %d:\n", i + 1);
        printf("  Year: %d\n", readV[i].year);
        printf("  Brand: %s\n", readV[i].brandName);
    }

    return 0;
}
*/

/*
create a structure in C to store the name of a batsman, runs scored and number of times the batsman is dismissed. in the program, read the data of five players and display the batting average of the player whose name is entered by the user. batting average is given by total_runs/total_dismissals.
*/

/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct players
{
    char name[20];
    int runs;
    int dismissed;
    float avg;
};
int main()
{
    int n = 2;
    int i;
    char search[20];
    int found = 0;
    struct players p[n];
    // getchar();
    printf("Insert record\n");
    for (i = 0; i < n; i++)
    {
        printf("Name : ");
        scanf("%[^\n]", p[i].name);
        getchar();
        printf("Total runs : ");
        scanf("%d", &p[i].runs);
        getchar();
        printf("Total dismissal : ");
        scanf("%d", &p[i].dismissed);
        getchar();
        p[i].avg = (float)p[i].runs / p[i].dismissed;
    }
    printf("\nEnter the name of the player to find the batting average: ");
    scanf(" %[^\n]", search);

    for(i=0;i<n;i++){
    if (strcmp(p[i].name, search) == 0)
    {
        printf("Batting average of %s is %.2f\n", p[i].name, p[i].avg);
        found = 1;
        break;
    }
}

if (!found) {
    printf("Player not found.\n");
}

return 0;
}*/

// wap in c to find largest and smallest element in an 1D array.

/*#include <stdio.h>
void large_small(int a[], int n, int *l, int *s)
{
    int i;
    *l = a[0];
    *s = a[0];
    for (i = 0; i < n; i++)
    {
        if (a[i] > *l)
        {
            *l = a[i];
        }
        if (a[i] < *s)
        {
            *s = a[i];
        }
    }
}
int main()
{
    int a[100], i, n, l, s;
    printf("enter how many number : ");
    scanf("%d", &n);
    printf("insert data\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    large_small(a, n, &l, &s);
    printf("largest : %d\n", l);
    printf("smallest : %d", s);
}*/

/*
WAP in c to display all the character between the given ranges
*/
/*#include<stdio.h>
int main(){
    char start,end;
    char ch;
    printf("Start : ");
    scanf("%c",&start);
    getchar();
    printf("End : ");
    scanf("%c",&end);

    if(start<=end){
        printf("character between %c and %c ",start,end);
        for(ch=start;ch<=end;ch++){
            printf("%c",ch);
        }
        printf("\n");
    }else{
        printf("kjb");
    }
    return 0;

}*/

/*#include <stdio.h>
int displaySeries(int n, int term) {
    if (n == 1) {
        printf("%d", term);
        return term;
    } else {
        printf("%d + ", term);
        return term + displaySeries(n - 1, term * 10 + 1);
    }
}

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Series: ");
    int sum = displaySeries(n, 1);

    printf("\nSum of the series is: %d\n", sum);

    return 0;
}*/

/*A file named emp.txt stores employ name, id, salary. WAP to display the details order by their salary*/

/*#include <stdio.h>
struct employ
{
    char name[20];
    int id;
    int salary;
};
int main()
{
    int i, j;
    int n = 2;
    struct employ e[n], temp;
    FILE *fp;
    fp = fopen("emp.txt", "wb");
    if (fp == NULL)
    {
        printf("Error occured!");
        exit(1);
    }
    printf("Start insert record in the file\n");
    for (i = 0; i < n; i++)
    {
        printf("EMP %d\n", i + 1);
        printf("Enter name : ");
        scanf("%s", &e[i].name);
        getchar();
        printf("Enter ID : ");
        scanf("%d", &e[i].id);
        printf("Enter Salary : ");
        scanf("%d", &e[i].salary);
    }
    fwrite(e, sizeof(struct employ), n, fp);
    fclose(fp);
    printf("\nRecord saved!");
    printf("\n");

    fp = fopen("emp.txt", "rb");
    if (fp == NULL)
    {
        printf("Error occured during file opening!");
        exit(1);
    }
    fread(e, sizeof(struct employ), n, fp);
    fclose(fp);

    printf("Record displayed ordered by salary\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (e[j].salary < e[j + 1].salary)
            {
                temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            }
        }
    }
    printf("\nRecords displayed in descending order of salary:\n");
    for (i = 0; i < n; i++)
    {
        printf("Name: %s, ID: %d, Salary: %d\n", e[i].name, e[i].id, e[i].salary);
    }

    return 0;
}
*/

/*
write in file using putc
*/
/*#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;
    FILE *fp;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    fp = fopen("read.txt", "wb");
    if (fp == NULL) {
        printf("File creation failed!\n");
        exit(1);
    }

    fputc(ch, fp);
    fclose(fp);
    printf("Character '%c' written to file!\n", ch);

    fp = fopen("read.txt", "rb");
    if (fp == NULL) {
        printf("File opening failed!\n");
        exit(1);
    }

    ch = fgetc(fp);
    fclose(fp);

    printf("Character read from file: '%c'\n", ch);

    return 0;
}*/

// WAP in c to copy the contents of one file to another.
#include <stdio.h>
#include <stdlib.h>

int main() {
    char source[20], dest[20];
    FILE *sf, *df;
    char ch;

    printf("Enter the source file name: ");
    scanf("%s", source);

    sf = fopen(source, "rb");
    if (sf == NULL) {
        sf = fopen(source, "wb");
        if (sf == NULL) {
            printf("Unable to create source file.\n");
            exit(1);
        }

        printf("Enter some text to write to the source file: ");
        getchar(); // To consume the newline character left by scanf
        char text[100];
        fgets(text, 100, stdin);
        fprintf(sf, "%s", text);
        printf("Sample content written to %s\n", source);
        fclose(sf);

        // Re-open source file for reading after writing to it
        sf = fopen(source, "rb");
        if (sf == NULL) {
            printf("Unable to open source file for reading.\n");
            exit(1);
        }
    }

    printf("Enter destination file name: ");
    scanf("%s", dest);

    df = fopen(dest, "wb");
    if (df == NULL) {
        printf("Oops! Could not open destination file.\n");
        fclose(sf);
        exit(1);
    }

    // Copy content from source to destination
    while ((ch = fgetc(sf)) != EOF) {
        fputc(ch, df);
    }

    printf("File copied successfully.\n");

    // Close both files after copying
    fclose(sf);
    fclose(df);

    // Reopen source file and display content
    sf = fopen(source, "rb");
    if (sf == NULL) {
        printf("Unable to open source file for reading.\n");
        exit(1);
    }
    printf("\nContent of source file:\n");
    while ((ch = fgetc(sf)) != EOF) {
        putchar(ch);
    }
    fclose(sf);

    // Reopen destination file and display content
    df = fopen(dest, "rb");
    if (df == NULL) {
        printf("Unable to open destination file for reading.\n");
        exit(1);
    }
    printf("\nContent of destination file:\n");
    while ((ch = fgetc(df)) != EOF) {
        putchar(ch);
    }
    fclose(df);

    return 0;
}
