#include <stdio.h>
int main(){
    char operator;
    float op1, op2, result;
    printf("Enter the operator(+,-,*,/) : \n");
    scanf("%c", &operator);
    printf("Enter any 2 numbners : \n");
    scanf("%f %f", &op1, &op2);
    switch (operator)
    {
    case '+':
        result = op1 + op2;
        printf("Sum of %.2f & %.2f : %.2f\n", op1, op2, result);
        //break;
    case '-':
        result = op1 - op2;
        printf("Difference of %.2f & %.2f : %.2f\n", op1, op2, result);
        //break;
    case '*':
        result = op1 * op2;
        printf("Product of %.2f & %.2f : %.2f\n", op1, op2, result);
        //break;
    case '/':
        result = op1 / op2;
        printf("Quotient of %.2f & %.2f : %.2f\n", op1, op2, result);
        //break;

    default:
        printf("Invalid input, please try again with proper operation\n");
        //break;
    }
    return 0;
}