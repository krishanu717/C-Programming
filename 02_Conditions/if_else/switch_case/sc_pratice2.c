/*
Create a simple calculator program that takes two numbers and an operator (+, -, *, /) 
as input and performs the corresponding operation
*/

#include <stdio.h>

int main(){
printf("Enter TWO NUMBER");
    int a ,b;
    char operator;
    scanf("%d%d", &a,&b);


printf("select operator( *, /, +, - ) :");


scanf(" %c", &operator);//  mistake 1 (no adding space in %c) 

    switch (operator)
    {
    case '*':
    printf("%d * %d = %d\n" , a, b,a * b);
        break;

        case '/':
        if ( b != 0)
        {
           printf("%d / %d = %d\n", a, b, a / b);
        }
        
    else
    {
        ("Hello Sir Ramanujan!\n");
    }
    
        break;

        case '-':
    printf("%d '-' %d = %d\n", a, b, a - b);
        break;

        case '+':
    printf("%d + %d = %d\n", a, b, a + b);
        break;
    
    default:
    printf("Invalid Input!");
        break;
    }
return 0;
}