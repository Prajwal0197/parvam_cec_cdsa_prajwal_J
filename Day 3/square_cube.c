#include <stdio.h>

int square(int a){
    return a*a;
}
int cube(int a){
    return a*a*a;
}

int main(){
    int num,result;
    printf("Enter a number to find it's square or cube : ");
    scanf("%d",&num);
    result=(square(num));
    printf("Square of %d is : %d\n",num,result);
    result=(cube(num));
    printf("Cube of %d is : %d\n",num,result);
}