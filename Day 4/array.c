#include <stdio.h>
int main(){
    int arr[4]={10,20,30};
    printf("The array elements are as follows : \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("%u",&arr);
    printf("\n");
}