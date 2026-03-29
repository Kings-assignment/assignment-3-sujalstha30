// Write a C program to find the length of a string without using the built-in string functions.
#include<stdio.h>
int main(){
    int count=0;
    char abc[100];

    printf("Enter a string:");
    scanf(" %s", abc);

    for (int i=0; i<=100; i++)
    {
        if (abc[i]=='\0')
        {
            break;
        }
        count++;
    }
    printf("The length of the string is: %d", count);
    return 0;
}