#include<stdio.h>
#include<string.h>

typedef struct employee{
    int code;
    float salary;
    char name[20];

} emp;

void show(struct employee emp){
    printf("The code of employee is: %d\n", emp.code);
    printf("The salary of employee is: %f\n", emp.salary);
    printf("The name of employee is: %s\n", emp.name);
    emp.code = 34;
}

int main(){
   //Declaring e1 and ptr

    emp e1;
     emp *ptr;

    //pointing ptr to e1
    ptr = &e1;

    //set the member value for e1
    ptr->code = 101;
    ptr->salary =11.01;
    strcpy(ptr->name,"Aditi");

    show(e1);
    
    return 0;
}