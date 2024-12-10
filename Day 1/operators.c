#include <stdio.h>
int main(){
    int op1 ,op2; //declaration
    printf("Enter two values : ");
    scanf("%d",&op1);
    scanf("%d",&op2);
    // op1=10; //initialization
    // op2=20;
    int sum, sub, prod, quo, rem;
    sum=op1+op2;
    sub=op1-op2;
    prod=op1*op2;
    quo=op1/op2;
    rem=op1%op2;
    printf("Sum of %d & %d : %d\n", op1,op2,sum);
    printf("Diff of %d & %d : %d\n", op1,op2,sub);
    printf("Product of %d & %d : %d\n", op1,op2,prod);
    printf("Quotient of %d & %d : %d\n", op1,op2,quo);
    printf("Reminder of %d & %d : %d\n", op1,op2,rem);

    return 0;
}