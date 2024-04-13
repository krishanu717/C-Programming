/*
Write a program to determine whether a given character entered by the user is a vowel or a consonant
*/
#include <stdio.h>
int main()
{

printf("Enter your Alphabate");

char aplha;
scanf("%c", &aplha);

if (aplha == 'a' || aplha == 'e' || aplha == 'i' || aplha == 'o' || aplha == 'u')
{
    printf("oh! you enter a vowel");
    /* code */
}

else
{
    printf("It's a consonante.");
}
   
   
return 0;
}