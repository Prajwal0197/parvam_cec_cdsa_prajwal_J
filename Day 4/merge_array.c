#include <stdio.h>
int main(){ 
    int size1,size2;
    printf("Enter the size of 1st array : \n");
    scanf("%d",&size1);
    printf("Enter the size of 2nd array : \n");
    scanf("%d",&size2);
    printf("Enter the array elements : \n");
    int arr[size1],arr2[size2];
    for (int i = 0; i < size1; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the array elements : \n");
    for (int e = 0; e < size2; e++)
    {
        scanf("%d",&arr2[e]);
    }
    int size=size1+size2;
    int newarr[size];
    for (int f = 0; f < size1; f++)
    {
        newarr[f]=arr[f];
    }
    for (int i = 0; i < size2; i++)
    {
        newarr[i+size1]=arr2[i];
    }
    printf("The elements of merged array are : \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",newarr[i]);
    }
    printf("\n");
}