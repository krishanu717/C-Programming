/*
Write a program that prompts the user to enter three numbers and then prints the largest among them.
*/
 #include <stdio.h>
 int main() {
    printf("User, Enter 1st Number:");
    int a;
    scanf("%d" ,&a);

 printf("User, Enter 2nd Number:");
    int b;
    scanf("%d" ,&b);

 printf("User, Enter 3rd Number:");
    int c;
    scanf("%d" ,&c);


    if ((a > b ) && (a > c))
    {
        printf("1st one is big: %d\n", a);
        /* code */
    
    }
     else if (((c > b ) && (a < c)))
    {
        printf("3rd number big: %d\n", c);
        /* code */
    }
    

    else
    {
        printf("2nd  is the big one: %d\n" , b);
    }
    
    return 0;
    

 }

