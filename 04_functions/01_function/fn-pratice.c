/*
Write the function calculateFactorial according to the problem description.
Write the main function to prompt the user for input, call the calculateFactorial function, and print the result.
*/

#include <stdio.h>
int CalculateFactorial(int n){
        int facto = 1;
        for (int i = 1; i <= n; i++){
            facto *= i;
        }
        return facto;
   
    }

    int main(){

        int a;
        printf("Enter a num:");
        scanf("%d", &a);
        
           int result = CalculateFactorial(a);
            printf("FACTO IS:%d", result);
       
        


        return 0;
    }