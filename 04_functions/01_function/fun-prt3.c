/*

3.Write a function called `isEven` that takes an integer as input and returns `1` if the number is even and `0` 
  if it's odd. Call this function from the `main` function to determine if a user-entered number is even or odd.

*/

#include <stdio.h>

int iseven(int a)
{

if (a %2 == 0)
{
    return 1;
}

else
{
    return 0;
}

}

int main(){

printf("Enter a num:");
int b;
scanf("%d" ,&b);

int result = iseven(b);

if (result == 1)
{printf("even");
    
}

else
{
    printf("odd");
}


    return 0;
}