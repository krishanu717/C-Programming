/*
WAP even number of user input from 1
*/
#include <stdio.h>
int main(){
printf("Enter Your Choose Number:");
int a ;
scanf("%d", &a);
for (int i = 1; i <a ; i++)
{
   if (i % 2 == 0)
   {
   printf("Even number are:%d\n", i);
   }
   
}

    return 0;
}