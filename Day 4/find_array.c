#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of an array : \n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int target=0;
    printf("Enter the target element which you want to find : \n");
    scanf("%d",&target);
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==target)
        {
            printf("The target element %d is found at index %d\n",target,i);
        }
    }
}