#include <stdio.h>
#include <stdlib.h>


float addition(float a, float b);
float subtraction(float a, float b);
float multiplication(float a, float b);
float division(float a, float b);

void main()
{
    float x = 0;
    float d = 0;
    char operation;

    printf("Hello traveler!\n");
    printf("Please enter the first number:\n");
    scanf("%f", &x);
    printf("Please enter the second number:\n");
    scanf("%f", &d);
    printf("Please enter the symbol of the operation you would like to do:\n");
    operation = getch();
    printf("%c\n", operation);

    switch(operation){

    case 43:
        addition(x, d);
        printf("The result of this operation is: %.2f", addition(x, d));
        break;

    case 45:
        printf("The result of this operation is: %.2f", subtraction(x, d));
        break;

    case 42:
        printf("The result of this operation is: %.2f", multiplication(x, d));
        break;

    case 47:
        printf("The result of this operation is: %.2f", division(x, d));
        break;

    deafult:
        printf("You have entered an incorrect symbol.");
    }

}

float addition(float a, float b){
return a + b;

}

float subtraction(float a, float b){
return a - b;

}

float multiplication(float a, float b){
return a * b;

}

float division(float a, float b){
return a / b;

}

