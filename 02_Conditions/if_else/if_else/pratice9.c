/*
Create a program that prompts the user to enter a character and determines whether
 it is an uppercase letter, lowercase letter, digit, or special character.
*/
#include<stdio.h>
#include<ctype.h> 

/*Including <ctype.h> is necessary in your C program 
if you plan to use functions such as isalpha(), isdigit(), isupper(), islower(), etc., 
as these functions are defined in the <ctype.h>*/


int main() 
{
    printf("Enter a Number: ");

char ch;
scanf("%c",  &ch);

if (isalpha(ch))
{
if (isupper(ch))
{
    printf("It is a upper case");
}
else
{
   printf("It is a smaller Case");
}
}

else if (isdigit(ch))
{
    printf("It is a digit!\n");
}
else
{
    printf("special character!");

}

return 0;

}