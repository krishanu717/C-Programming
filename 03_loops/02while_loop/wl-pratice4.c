/*
3.Write a program to calculate the factorial of a given number using a while loop.

*/
#include <stdio.h>
int main(){
printf("Enter you factorial Number:-");
 
int i = 1,temp= 1, factorial, a;
 
scanf("%d", &a);



while (i <= a)
{ 

factorial = i * temp;
 temp = factorial;
i++;
    printf("%d ",factorial );
    
   
}


    return 0;
}