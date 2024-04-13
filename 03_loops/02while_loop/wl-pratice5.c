/*
5.Write a program to calculate the sum of all numbers from 1 to 100 using a while loop.
*/
#include <stdio.h>
int main(){

int a = 1, var = 0;

while (a <= 100)
{
    var += a;

    a++;
    printf("%d " ,var);
}



return 0;

}