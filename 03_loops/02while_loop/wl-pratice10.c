/*
10.Write a program to find the nth term of the Fibonacci series using a while loop without using recursion.
*/
#include<stdio.h>
int main(){

int i = 1,temp = 0, fibo, curr = 1, a;
 printf("Enter a value:");
scanf("%d", &a);



while (i <= a)
{ 

fibo = temp + curr;
 temp = curr;
 curr = fibo;
i++;
    printf("%d ", fibo);

}
    return 0;
}