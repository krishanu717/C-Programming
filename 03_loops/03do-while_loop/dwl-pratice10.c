/*
10. Write a program to repeatedly prompt the user to enter a character until they enter the character 'q'. 
Print all characters entered before 'q' is entered.
*/
#include <stdio.h>
#include <string.h>
int main(){
char input;
 printf("Enter a char (ENter 'q' to quit:)\n");
 
do
{
   
    scanf("%c" , &input);
    
    if(input != 'q')
    {
        printf("you entered %c\n" ,input);

}
} while (input != 'q');

printf("congrats! you enter 'q'");


    return 0;
}