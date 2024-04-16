/*
5. Write a program to repeatedly ask the user for a number until they enter
 a number that is divisible by both 2 and 3. Print the first number that meets this condition.

*/
#include <stdio.h>
int main(){

int a, count = 0;
 
 do
{
     printf("Enter a Num:");
     scanf("%d", &a);
     count++;
} while ( (a % 2 != 0) || (a % 3 != 0 ));

printf("%d  The 1st one Satisfy thr condition\nit takes %d times to satisfy the condition! ",a ,count);

    return 0;
}