/*
6. Write a program to print the Fibonacci sequence up to a given number `n` using a `do-while` loop.
*/

#include <stdio.h>
int main(){
    printf("Enter a num:");
    int a = 0, sum, b = 1, c, counter = 1, calculate = 0;

    scanf("%d", &c);
do
{
    
     //fibo algo
     sum = a + b;
      printf(" fibo list: %d\n",sum);
     a = b;
     b = sum; 
     calculate+=sum;// question 7 logic
      printf(" Total is:%d",calculate);
    
    counter++;
    

} 
while (counter <= c);


 return 0;
}
