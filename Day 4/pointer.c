#include <stdio.h>
int main(){
    int num=20;
    printf("The value of number : %d\n",num);
    printf("The address of number(%d) : %p\n",num,&num);
    int* ptr=&num;
    printf("The value of number : %d\n",*ptr);
    printf("The address of number(ptr) : %p\n",ptr);
    *ptr=30;
    printf("The updated value of number : %d\n",num);
    
}