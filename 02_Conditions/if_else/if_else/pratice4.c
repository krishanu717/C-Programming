/*
Develop a program that calculates the grade of a student based on their percentage marks. 

The grading system is as follows:

90% or above: Grade A
80% to 89%: Grade B
70% to 79%: Grade C
60% to 69%: Grade D
Below 60%: Grade F
*/
#include <stdio.h>
int main(){

printf("Enter your percentage:");
int a;
scanf("%d" , &a);

if (a >= 90)
{
    printf("Wow! its grade a\n");
}

else if (a >= 80 && a <= 89)
{
    printf("Wow! its grade b\n");
}

else if (a >= 70 && a <= 79)
{
    printf("Wow! its grade c\n");
}
else if(a >=60 && a <= 69)
{
    printf("Wow! its grade d\n");
}


else{
 
 printf("WORK HARD ! Next Time");

}


    return 0;
}
