
//Write a program that takes an integer input from the user and prints whether it is positive, negative, or zero.
#include <stdio.h>
int main(){
printf("Enter your number : ");
int a;
scanf("%d" ,&a);
if (a < 0)
{
    
    printf("negtive ! value");
}

else if (a > 0)
{
    printf("postive!integer");
}

else 
{
    printf("ohh ! that's zero");
}


    return 0;
}