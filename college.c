#include<stdio.h>
void display(){
    static int i=0;
    i++;
    printf("%d", i);
}
int main(){
    int j;
    for(j=0; j<5; j++)
    
}