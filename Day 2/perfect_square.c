#include <stdio.h>
int main(){
    int num,square,i=1;
    printf("Enter a range to print the perfect square : \n");
    scanf("%d",&num);
    do
    {
        if ((square=(i*i))<num)
        {
            printf("%d\n", square);
            i++;
        }
    } while (num>0);   
}