/*
Write a program to print a given number start from 1 using a for loop.

*/
#include<stdio.h>
int main(){
    
    printf("Enter a Number:");
    int a ;
    scanf("%d" ,&a);

for ( int i =1; i <= a; i++)
{
    printf("%d\n", i);
}

    return 0;
}