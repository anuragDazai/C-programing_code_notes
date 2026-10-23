// Write a program to store the details of 3 employees from user defined data. Use the structure declared above.

#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main(){
    struct Employee emp[3]; 
    for(int i = 0; i < 3; i++){
        printf("Enter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }
    return 0;
}