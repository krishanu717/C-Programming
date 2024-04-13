/*
Write a program that takes a number as input and prints the name of the corresponding month.
 (e.g., 1 for January, 2 for February, etc.)
*/
#include<stdio.h>
int main(){

printf("Enter The number of month: ");

    int a;
    scanf("%d", &a);

switch (a)
{
case 1:
printf("january");
    break;

    case 2:
printf("February");
    break;

    case 3:
printf("march");
    break;

    case 4:
printf("April");
    break;

    case 5:
printf("may");
    break;

    case 6 :
printf("june");
    break;

    case 7:
printf("july");
    break;

    case 8:
printf("agaust");
    break;

    case 9 :
printf("Septembar");
    break;
    

    case 10:
printf("Octobar");
    break;
    
    case 11:
printf("November");
    break;
    

    case 12:
printf("December");
    break;

default:
  printf("Invild Input!");
    break;
}
    return 0;
}