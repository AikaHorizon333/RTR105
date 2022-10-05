#include <stdio.h>

unsigned long long largeMultiplication(long a, long b){
    return a*b;
}

long number1;
long number2; 
long long result;

int main (){


    printf("Please input a number: \n");
    scanf("%ld", &number1);

    printf("Please input a second number: \n");
    scanf("%ld", &number2);

    result = largeMultiplication(number1,number2);

    printf("Numer 1: %ld \nNumer 2: %ld \n", number1, number2);
    printf("Your result is: %llu", result);



    return 0;
}