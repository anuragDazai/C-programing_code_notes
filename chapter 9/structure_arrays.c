

#include <stdio.h>

struct Student {
    int id;          // 4 bytes
    char name[20];   // 20 bytes
    float marks;     // 4 bytes
};

int main(){
    struct Student classroom[2]; // Array means that we make three instances of the structure Student, from student[0] to student[2].
    return 0;
}

// struct Student classroom[3] = {
//     {101, "Alice", 92.5f},
//     {102, "Bob",   84.0f},
//     {103, "Carol", 96.0f}
// };  can be done like this as well.

// |------------- classroom[0] -------------|------------- classroom[1] -------------|------------- classroom[2] -------------|
// | id (4B) | name (20B) | marks (4B) [pad]| id (4B) | name (20B) | marks (4B) [pad]| id (4B) | name (20B) | marks (4B) [pad]|