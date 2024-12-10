#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of an array : \n");
    scanf("%d",&size);
    int arr[size],bkp[10]={0};
    printf("Enter the array elements : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        int count = 1;
        if (bkp[i]==0)
        {
            for (int j = i+1; j < size; j++)
            {
                if (arr[i]==arr[j])
                {
                    count++;
                    bkp[j]=1;
                }
                
            }
            
        }
        printf("Element %d occurs %d times\n",arr[i],count);
    }
}