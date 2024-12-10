#include <stdio.h>
#define PI 3.142

float area(float r){
    return PI*r*r;
}
float circ(float r){
    return 2*PI*r;
}

int main(){
    float num,result;
    printf("Enter the radius of the circle : \n");
    scanf("%f",&num);
    result=area(num);
    printf("Area of the circle with radius %.2f is : %.2f\n",num,result);
    result=circ(num);
    printf("Circumference of the circle with radius %.2f is : %.2f\n",num,result);
    return 0;
}