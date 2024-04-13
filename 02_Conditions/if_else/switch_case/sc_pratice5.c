/*Write a program to calculate the total cost of a shopping cart based on 
the user's choice of items. The user can choose items by entering a number corresponding to each item.
 The program should display a menu of items along with their prices. After the user has
  finished selecting items, the program should calculate and print the total cost of the items in the shopping cart.

Menu:
1. T-shirt - $10
2. Jeans - $30
3. Shoes - $50
4. Hat - $15

The program should repeatedly prompt the user to choose items until they enter a special value
 (e.g., 0) to indicate that they have finished selecting items.
*/

#include <stdio.h>
int main(){

printf("Menu:\n1.T-shirt\n2.jeans\n3.Shoes\n4.Hat\n");
printf("Enter the number You want to buy: ");

int choice;
scanf("%d" ,&choice);

switch (choice)
{

case 1:
    printf("T-shirt\n");
    printf("cost 10$\n");
    break;

    case 2:
    printf("Jeans\n");
    printf("cost 30$\n");
    break;

    case 3:
    printf("Shoes\n");
    printf("cost -50$\n");
    break;

    case 4:
    printf("Hat\n");
    printf("cost -15$");
    break;

default:
printf("invalid Input!");
    break;
}




return 0;

}