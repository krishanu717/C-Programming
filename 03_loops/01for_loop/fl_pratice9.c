/*
Write a program that takes an integer input from the user and
 calculates the sum of its digits using a while loop.
*/


#include <stdio.h>
int main(){

int a ,sum = 0 ,reminder;

scanf("%d", &a);
printf("enter a num:");

for (int i = a; i != 0; i /=10)
{
 reminder = i % 10;
 sum += reminder;
 
}
 printf("%d sum of digits" ,sum);




    return 0;
}