/*
Write a program that uses a while loop to print all even numbers from 2 to 20.

number % 2 = 0 = even number

*/


#include<stdio.h>
int main(){

int a = 2;

while (a <= 20)
{
   if ( a % 2 == 0)
   {
    printf("%d\n", a);
   }
   a++;
}


    return 0;
}