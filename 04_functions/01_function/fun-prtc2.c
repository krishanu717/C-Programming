/*
2.Write a function called `add` that takes two integers as input and returns their sum. 
   Call this function from the `main` function and print the result.
   */


  #include <stdio.h>
  int add(int a,int b){

     int value = a+b;
 return value;
  }

  int main(){

int a,b;

printf("enter number num 1 ");
scanf("%d", &a);


printf("enter number num 2 ");
scanf("%d", &b);

int result = add(a ,b);
printf("Result is:%d", result);

    return 0;
  }