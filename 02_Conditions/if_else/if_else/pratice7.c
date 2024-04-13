/*
Write a program that calculates the net salary of an employee based on their basic salary and allowances.
 Assume the allowances include HRA (House Rent Allowance) and DA (Dearness Allowance). If the basic salary is 
 less than or equal to 10000, the HRA is 20% of the basic salary, and the DA is 80% of the basic salary. 
 If the basic salary is more than 10000, 
the HRA is 25% of the basic salary, and the DA is 90% of the basic salary.

*/
#include<stdio.h>
 int main()
 {
printf("Enter Your Basic Salary: ");

int a;    
scanf("%d" ,&a);

if (a < 10000 || a == 10000)
{
    int c = (a + 10000);
    printf("%d,\n",c);
}
 else if (a > 10000)
 {
   int d = a +11500;

   printf("%d\n" ,d);
 }
 



return 0;

 }