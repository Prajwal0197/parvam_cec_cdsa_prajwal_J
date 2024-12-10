#include <stdio.h>
int main(){
    int num,sum=0;
    printf("Enter a positive number : \n");
    scanf("%d",&num);
    for (int i = 0; i <= num; i++)
    {
        sum+=i;
    }
    printf("The sum of natural numbers from 0 to %d is %d\n",num,sum);
    
    return 0;
}