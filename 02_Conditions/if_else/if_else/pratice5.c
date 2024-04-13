/*

Create a program that takes an integer input representing 
a month number (1 for January, 2 for February, etc.) and prints the number of days in that month.
 Assume it's not a leap year.
*/


#include <stdio.h>
int main(){
 printf("Enter your month : ");
    int a;
    scanf("%d" ,&a);

    if (a == 1)
    {
        printf("The month is January, it has 31 Days");
    }
    else if  (a == 2)
    {
        printf("The month is feb, it has 28 Days");
    }

 else if  (a == 3)
    {
        printf("The month is March, it has 31 Days");
    } 
else if  (a == 4)
    {
        printf("The month is April, it has 30 Days");
    } 
else if  (a == 5)
    {
        printf("The month is May, it has 31 Days");
    } 
else if  (a == 6)
    {
        printf("The month is June, it has 30 Days");
    } 
else if  (a == 7)
    {
        printf("The month is July, it has 31 Days");
    }
 else if  (a == 8)
    {
        printf("The month is Agust, it has 30 Days");
    } else if  (a == 9)
    {
        printf("The month is Septembar , it has 31Days");
    } else if  (a == 10)
    {
        printf("The month is , it has 31 Days");
    }
     else if  (a == 11)
    {
        printf("The month is Nov, it has 30 Days");
    }
  else if  (a == 12)
    {
        printf("Last Month  of years enjoy last 31 days of this year");
    }

    else if (a > 12)
    {
       printf(" invalid ! input");
    }
    
}