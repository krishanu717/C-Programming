/*

Write a program to calculate the total cost of a meal based on 
the user's choice of dish. The user will input a number corresponding to the dish 
(e.g., 1 for pizza, 2 for burger, etc.), 
and the program will print the total cost.
*/
#include <stdio.h>
int main(){



printf( "Choose a meal: \n1.pizza\n2.Burgir\n3.Chop\n4.Chut\n");

printf("Enter a number to book a food meal:");

int a;
scanf(" %d" ,&a);

switch (a)
{
case 1:

printf("Pizza Will be deliverd 30 mins.");
break;

case 2:
printf("Burgir Will be deliverd 30 mins.");
break;
case 3:
printf("chop Will be deliverd 30 mins.");
break;

case 4:
printf("Inti Tharak accha nehi hain beta .");
break;

default:
printf("INvalid input! thank for choosing us!");
    break;
}


    return 0;

}