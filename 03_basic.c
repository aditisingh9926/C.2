#include<stdio.h>

int main(){
    int a, b;
    printf("Enter a number\n");
    scanf("%d", &a);

    if(a%2==0){
        printf("%d is prime\n", a);
    }
    else{
        printf("%d is non prime\n", a);
    }
    return 0;
}