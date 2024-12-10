#include <stdio.h>

int sum(int a, int b){
    return a+b;
}
int main(){
    int op1,op2,add;
    printf("Enter any 2 numbers : \n");
    scanf("%d %d",&op1,&op2);
    add=sum(op1,op2);
    printf("Sum of %d and %d is : %d\n",op1,op2,add);
}