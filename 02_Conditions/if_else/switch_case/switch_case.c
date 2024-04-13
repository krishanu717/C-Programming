/* 
syntax:

switch (expression) {
    case constant1:
        // code to be executed if expression matches constant1
        break;
    case constant2:
        // code to be executed if expression matches constant2
        break;
    // more case statements can be added as needed
    default:
        // code to be executed if expression doesn't match any constant
}

*/

#include<stdio.h>
int main()
{
printf("Enter a digit;");

int a;
scanf("%d", &a);

switch (a)   //mistake1 ("%d", &a)
{
case 1:     //mistake2 not using this(:)
printf("a is bigger than one");
break;

case 0:
printf("Ohh! its a Zero!");
break;

case -1:
printf("It's LOwer than 1");
    break;
    default:
printf("It's LOwer than 1");
    break;
}


}