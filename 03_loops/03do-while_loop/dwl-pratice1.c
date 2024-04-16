/*
1. Write a program to repeatedly prompt the user to enter a 
positive integer until they enter a negative integer. Print the sum of all positive integers entered.
*/

#include <stdio.h>
int main(){

int a, sum=0;


do
{
printf("Enter a Num:");

scanf("%d", &a);
 if (a>=0)
  sum+=a;
 }
   while (a >= 0);

printf("Sum is:%d;", sum);
    return 0;
}