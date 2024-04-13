/*
Develop a program that takes a single character as input and prints whether it is a vowel or a consonant.
*/

#include <stdio.h>
int main(){
printf("ENter a aplhabet:");
char alpha;
scanf("%c", &alpha);
switch (alpha)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
printf("Its a Vowel!");
    break;

default:
printf("Its a BITCH !");
    break;
}



    return 0;
}