#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
struct employee aditi ={100, 34.23, "Aditi"};

printf("Code is: %d \n", aditi.code);
printf("Salary is: %f \n", aditi.salary);
printf("Name is: %s \n", aditi.name);
    return 0;
}