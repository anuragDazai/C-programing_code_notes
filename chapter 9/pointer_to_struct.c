// A pointer to a struct is simply a pointer variable that stores the starting memory address of a struct instance, rather than a primitive data type like an int or float.

struct Student {
    int id;
    char name[20];
    float marks;
};

int main(void) {
    // 1. Concrete instance on the stack
    struct Student student1 = {101, "Anurag", 92.5f};

    // 2. Pointer holding the base address of student1
    struct Student *ptr; // we initilized a pointer variable of type struct Student. and it contains the address of the struct Student instance.

    // ptr contains the scalar value 0x2000(address of the struct Student instance student1) and the struct Student instance student1 contains the scalar value 101, "Anurag", 92.5f.

    ptr = &student1; // we put the address of student1 into the pointer variable ptr.
    printf("Student ID: %d\n", (*ptr).id); // *ptr → access the entire structure. .id → access its id member.
    printf("Student Name: %s\n", (*ptr).name); // Accessing name
    printf("Student Marks: %.2f\n", ptr->marks); // Accessing marks


    return 0;
}



// What if we have an array of structures and a pointer?
// Now we combine everything.
// struct Student students[3] = {
//     {"Anurag", 19, 85.5f},
//     {"Rahul", 20, 78.0f},
//     {"Maya", 18, 91.0f}
// };

// struct Student *ptr = students;


// Why does this work?

// In most expressions, the array students converts to a pointer to its first element.


// Method B: Use the arrow operator
// ptr->age

// This is equivalent to:
// (*ptr).age


// Variable:           student1                                                  ptr
// Address:    0x2000        0x2004         0x2018                        0x3000
// Content:  [ id: 101 ] [ name: "Anurag" ] [ marks: 92.5 ]  ...        [ 0x2000 ]