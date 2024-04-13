/*
Write a program to generate the Fibonacci series up to the Nth term using a for loop.
*/
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int a, sum = 0, b = 1, next;

    scanf("%d", &a);
    printf("%d This is your entered number:\n", a);

    //printf("%d ", b); // Print the first number of the series

    for (int i = 1; i < a; ++i) {
        next = sum + b;
        sum = b;
        b = next;
        printf("%d ", b);}

    return 0;
}
