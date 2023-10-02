#include<stdio.h>

int main(){
    // area of rectangle
    // float length, width;
    // float area;

    // printf("Enter the length \n");
    // scanf("%f", &length);

    // printf("Enter the width \n");
    // scanf("%f", &width);

    // area = length*width;
    // printf("Area is : %f\n", area);
    int length, width;
    int area;

    printf("Enter the length \n");
    scanf("%d", &length);

    printf("Enter the width \n");
    scanf("%d", &width);

    area = length*width;
    printf("Area is : %d\n", area);

    return 0;
}