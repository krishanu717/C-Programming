/*Create a program that determines whether a given year is a leap year or not
. (A leap year is divisible by 4, but not by 100 unless it is also divisible by 400.)*/

#include <stdio.h>
int main(){

printf("enter your year :");
int a;
scanf("%d" ,&a);
if ( a % 400 == 0 || a % 4 ==0)
{
    printf("OHH! its a leap year ");
    /* code */
}

else{
    printf("its normal year!");
}

    return 0;
}