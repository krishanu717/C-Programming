/*
Write a program to simulate rolling a six-sided die until a 6 is rolled.
 Print the number of rolls it took to get a 6.
*/
#include<stdio.h>
int main(){

int a, rollcount = 0;


do{

printf("Roll!:");
scanf("%d", &a);

rollcount++;
}
 while (a != 6);
printf("%d times roll  the dice to get 6! \n", rollcount);
    return 0;
}