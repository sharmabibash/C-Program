// WAP to find entered alphabet by user is vowel or consonant.. using string handling function.
#include <stdio.h>
#include <string.h>
int main()
{
    char ch[50]; // stored in ch[0],ch[1],ch[2]
    printf("Enter any alphabet letter to check volwel or consonant : ");
    scanf("%s", ch);
    strlwr(ch);
    if (ch[0] == 'a' || ch[0] == 'e' || ch[0] == 'i' || ch[0] == 'o' || ch[0] == 'u')
    {
        printf("%s is vowel", ch);
    }
    else
    {
        printf("%s is consonant", ch);
    }
}

// strlwr ---> convert it into lower case.
//  strupr ---> convert it into upper case.
// ch[100] ----> it is an array. its elemts start from zero.
// ch[0]