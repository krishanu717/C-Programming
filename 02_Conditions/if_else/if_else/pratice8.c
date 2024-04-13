/*
Create a program that takes three integer inputs representing 
the sides of a triangle and determines whether it is an equilateral, isosceles, or scalene triangle.

*/

#include<stdio.h>
int main()
{
printf("Enter your Number:");

int a , b , c;

scanf("%d%d%d", &a, &b, &c);

if (a + b +c == 180)
{
 if (a == b && c == a )
 {
   printf("This Equilateral Triangle! ");
 }
 
 else if (a !=b && a!= c && b != c) 
 {
   printf("This Scalene Triangle! ");

 }

else if ((a == b && a!= c) ||(b ==c && b!=a))
 {
   printf("This Isosceles Triangle ! ");

 }
    }
  
  
else{

    printf("Brother Triangle is 180 degree! ");
}

return 0;

}