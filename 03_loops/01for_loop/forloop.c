/*
So loop is basically use for for maintain any control flow with out repat any statement in code.
 there are three loop we can see in C laNGUAGE:
 1. for-loop
 2.while-loop
 3.do-while_loop


 for loop:
 " SYNTAX"


main()

for (initialization; condition; increment/decrement) {
    // code to be executed
}
return 0;

}

*/

#include <stdio.h>
int main(){
    printf("Printing value 1 to 10:\n");
    

for (int i = 1; i <=10; i++)
{
    printf("%d\n",i);
};


    return 0;

}