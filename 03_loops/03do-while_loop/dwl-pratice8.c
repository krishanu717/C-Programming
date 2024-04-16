/*
 8.Write a program to repeatedly ask the user to enter two numbers until both numbers are even.
 Print the product of the two numbers once both are even.
*/
#include <stdio.h>
int main(){

int a, b;
do
{ printf("Enter Two num:");
    scanf("%d", &a ,&b);
    
} while ((a % 2 != 0) ||( b % 2 != 0));
 




    return 0;
}