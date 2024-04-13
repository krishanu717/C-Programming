/*
Write a program to calculate the sum of numbers from 1 input using a for loop.
*/
#include <stdio.h>
int main(){
int sum = 0;
printf("Enter a Number:");
int a;
scanf("%d", &a);
for (int i = 1; i <=a; i++)
{
    sum+= i; /*The expression `sum += i;` is a shorthand notation for `sum = sum + i;`.
             It adds the value of `i` to the current value of `sum` and assigns the result back to `sum`.
            In other words, it's equivalent to incrementing `sum` by the value of `i`. This is a common 
            idiom used to accumulate values in loops. For example, if `sum` initially holds 0 and `i`
             holds 1, then `sum += i;` would update `sum` to hold 1. If `i` then holds 2, `sum` would be
             updated to hold 3 (0 + 1 + 2). And so on, until the loop finishes.*/
printf("Sum is: %d\n", sum);

}


    return 0;
}