#include <stdio.h>

int main(){
    float radius;
    printf("Enter Radius: ");
    scanf("%f",&radius);

    float circumference = 2 * 3.14 * radius;
    printf("Circumference is %f", circumference);
}