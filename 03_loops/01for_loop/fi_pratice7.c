/*
avg of given number
*/

#include<stdio.h>
int main(){

int a ,sum = 0;
scanf("%d",&a);


for (int i = 0; i < a; i++)
{
   sum += i;
}
 float b = (float)sum / a;
   printf(" the avrage 1 to user given number :%.2f",  b); //

//    float b = (float)sum / a; // Calculate the average

//     printf("Average of numbers up to %d is: %.2f\n", a, b);

    return 0;
}