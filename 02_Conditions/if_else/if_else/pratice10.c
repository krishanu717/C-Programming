/*
Fibonacci series 
*/
#include<stdio.h>
int main(){

int a = 1 , b = 0, c, d;
scanf("%d", &c);


 for (int i = 0; i <= c; i++)
 {
   
   if (i <= 1)
   {
     d = i;
   }
    else
    {
        d = a+b;
        a = b;
        b = d;
    }
    printf("%d\n",d);
 }
    return 0;

}