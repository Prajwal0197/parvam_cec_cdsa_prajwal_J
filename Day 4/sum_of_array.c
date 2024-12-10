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
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
    }
    printf("The sum of array elements is : %d\n", sum);
    
    return 0;
}