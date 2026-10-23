
#include <stdio.h>
struct Student {
    int id;
    char name[20];
    float marks;
};

void show(struct Student e){ // we can pass the struct Student instance to a function by value. The function show() takes a struct Student parameter e and prints its members.
    printf("Student ID: %d\n", e.id);
    printf("Student Name: %s\n", e.name);
    printf("Student Marks: %.2f\n", e.marks);
} // function prototype

int main(void) {
    struct Student student1 = {101, "Anurag", 92.5f};
    
    
    struct Student *ptr;
    
    ptr = &student1;
    printf("Student ID: %d\n", (*ptr).id); // *ptr → access the entire structure. .id → access its id member.
    printf("Student Name: %s\n", (*ptr).name); // Accessing name
    printf("Student Marks: %.2f\n", ptr->marks); // Accessing marks
    
    show(student1); // this is pass by value. The function show() takes a struct Student parameter e and prints its members.
    show(*ptr); // this is pass by value. The function show() takes a struct Student parameter e and prints its members.

    return 0;
}