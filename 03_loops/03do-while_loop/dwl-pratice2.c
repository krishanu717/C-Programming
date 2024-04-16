/*
2. Write a program to repeatedly ask the user for a number until they enter 0. 
Calculate and print the sum of all the numbers entered.
*/

#include <stdio.h>
int main(){
int a, total = 0;

do
{
printf("Enter the Num:");
scanf("%d", &a);
if (a != 0)

total +=a;

} while (a != 0);

printf("Total is:%d", total);
    return 0;
}