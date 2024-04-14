/*
9.Write a program to check if a given number is prime or not using a while loop.
*/
#include <stdio.h>
int main(){
printf("Enter a num:\n");
int num, i= 2, isprime =1;
scanf("%d", &num);

if (num < 2)
{
    printf("bro! please enter a value bigger than 1");
  return 0;
}
while (i * i <=num)
{
    if (num % i ==0)
    {
    isprime = 0;
     break;
    }
    i++;
  

}
if (isprime )
{
    printf("it is not a prime number");
}
else
{
    printf("it is a prime number:");
}

    return 0;
}