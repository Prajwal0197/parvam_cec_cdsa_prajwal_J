#include <stdio.h>
int main(){
    int num,rev=0,org;
    printf("Enter a number to be reversed : \n");
    scanf("%d",&num);
    printf("Entered Number : %d\n",num);
    org=num;
    while (num>0)
    {
        rev=rev * 10 + num % 10;
        num=num / 10;
    }
    printf("Reversed Number : %d\n",rev);
    if (org==rev)
    {
        printf("The given number is a palindrome\n");
    }else{
        printf("The given number is not a palindrome\n");
    }
}