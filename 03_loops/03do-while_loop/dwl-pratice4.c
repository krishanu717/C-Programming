/*

Write a program to repeatedly prompt the user to enter a password 
until they enter the correct password "password123". Print a message indicating success once the correct password 
is entered.

*/
#include <stdio.h>
#include <string.h>//using for string
int main(){

int count = 0; 
char s[20] ;
do
    {
    printf("Enter the pass:");
    scanf("%s", s); //
    
    count++;
   } 

    while(strcmp( s ,"password123") != 0);

    printf("Sucess!\n" );

if (count >= 4)
{
    printf("Finnally! Enter the right one after %d times. ufff!",count );
}
else
{

    printf("Gotcha! in just %d times.", count);
}



    return 0;
}