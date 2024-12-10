#include <stdio.h>
int main()
{
    int size;
    printf("Enter the number of elements : \n");
    scanf("%d", &size);
    int arrofnum[size];
    printf("Enter %d element into an array : ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arrofnum[i]);
    }
    int max, min;
    max= min = arrofnum[0];
    for (int i = 0; i < size; i++)
    {
        if (arrofnum[i] > max)
        {
            max = arrofnum[i];
        }
        if (arrofnum[i] < min)
        {
            min = arrofnum[i];
        }
    }
    printf("The largest element in the given array is:%d\n", max);
    printf("The smallest element in the given array is:%d\n", min);
}