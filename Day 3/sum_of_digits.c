#include <stdio.h>
int main(){
    int sum=0,num,digit;
    printf("Enter any number to get the sum of digits : \n");
    scanf("%d",&num);
    printf("Sum of %d is : ");
    do
    {
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    } while (num>0);
    printf("%d\n",sum);
    
}