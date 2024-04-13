/*
Write a program that takes an integer input from the user and
 calculates the sum of its digits using a while loop.
*/
#include <stdio.h>
int main(){

int a ,reminder, sum = 0;

printf("enter a num:");
scanf("%d" ,&a);


while (a != 0)
{
    reminder = a % 10 ;
    sum += reminder;
     a /=  10;
    
}
 printf("%d sum of your enter digit" ,sum);

    return 0;
}