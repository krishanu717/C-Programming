/*
6.Write a program to check if a given number is a palindrome using a while loop.
*/

#include <stdio.h>

int main(){

    
 printf("Enter Num:");

 int i, sum, d = 0 , num;

 scanf("%d", &i);

num == i;

while (i != 0)
{
 sum = i % 10;

 d = d * 10 + sum;

 i /= 10;

}
//printf("Reverse Order is :%d\n", d);

if (num == d)
{
  printf("this number is palindrome!");
}
else
{
    printf("Try another one this is not Palindrome!");
}




    return 0;
}
