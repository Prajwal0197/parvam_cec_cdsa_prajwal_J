#include <stdio.h>
int main(){
    int num1,num2;
    printf("Enter any 2 numbers\n");
    scanf("%d %d",&num1,&num2);
    // if (num1>num2)
    // {
    //     printf("%d is greater than %d\n",num1,num2);
    // }
    // else{
    //     printf("%d is greater than %d\n",num2,num1);
    // }
    (num1>num2) 
        ? printf("First Number (%d) is greater than Second Number (%d)\n",num1,num2) 
        : printf("Second Number (%d) is greater than First Number (%d)\n",num2,num1);

    return 0;
}