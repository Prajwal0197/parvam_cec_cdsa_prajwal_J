#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of an array : ");
    scanf("%d",&size);
    printf("\n");
    int arr[size];
    printf("Enter the elements of an array : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array elements are as follows : \n");
    for (int i = 0; i < size; i++)
    {
        printf("The elements in index %d is %d\n",i,arr[i]);
    }
    printf("\n");
    
}