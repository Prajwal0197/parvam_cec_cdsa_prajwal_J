#include <stdio.h>
int main(){
    int num;
    printf("Enter the range to print the even numbers : \n");
    scanf("%d",&num);
    for (int i = 0; i <=num; i++)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
        }
    }
    
    return 0;
}