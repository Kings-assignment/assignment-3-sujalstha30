// Write a function named findFactorial that takes an integer as input and returns its factorial.
#include<stdio.h>
int findFactorial (int n)
{
    int i=1;
    int factorial=1;

    while(i<=n)
    {
        factorial=factorial*i;
        i++;
    }
    return factorial;
}

int main(){
    int n;

    printf("Enter a number:");
    scanf(" %d", &n);

    int factorial=findFactorial(n);

    printf(" %d! = %d",n, factorial);
    return 0;
}