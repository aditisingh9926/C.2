#include<stdio.h>
void swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("x=%d y=%d\n", x,y);
}
int main(){
    int a = 10, b = 20;
    swap(a,b); //swap(10, 20)
    printf("a=%d b=%d", a,b);
    return 0;
}