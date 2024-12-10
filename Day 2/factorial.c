// #include <stdio.h>
// int main(){
//     int num,fact=1;
//     printf("Enter a number : ");
//     scanf("%d", &num);
//     for (int i = 1; i < num; i++)
//     {
//         fact=fact*i;
//     }
//     printf("%d\n",fact);
// }

#include <stdio.h>
int main(){
    int i = 6;

    do {
    printf("%d\n", i);
    i++;
    }
    while (i < 5);
    printf("%d",i);

    // while (i<5)
    // {
    //     printf("%d\n", i);
    //     i++;
    // }