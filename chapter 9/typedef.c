// It does not create a new data type or allocate memory; it creates a type alias (a synonym) for an existing primitive or derived type in the compiler's symbol table.

// If your legal name is "Alexander Bartholomew Montgomery III", signing that on every single sheet of paper is annoying and error-prone.

// Instead, you say:

// "From now on, whenever I write 'Alex', I mean Alexander Bartholomew Montgomery III."

// syntax: typedef <existing_type> <alias_name>;

#include <stdio.h>

typedef struct student{
    char name[20];
    int roll_no;
    float marks;
} stu; // here we are using "stu" as alias name for struct student to replace it with struct student.
int main(){
    typedef int anurag;
    anurag a = 124; // here we using "anurag" as alias name for datatype int to replace it with int.
    int b = 67; // origianl name works fine too.
    printf("The number is %d", a);
    printf("The number is %d", b);

    // we use tyepedef to create a new name for an existing type. It does not create a new data type or allocate memory; it creates a type alias (a synonym) for an existing primitive or derived type in the compiler's symbol table.
    // it is mostly used in structs and unions to make the code more readable and easier to understand.

    // initially we were writing
    struct student student1;
    // but now we can write
    stu student2; // here we using a shorter form to replace "struct student" with "stu" to make the code more readable and easier to understand, it works the same.
    
    // typedef struct student std; // we can also use this way to create a new name for an existing type, it works the same.

    student2.roll_no = 101;
    student2.marks = 95.5;
    student2.name[0] = 'A';
    student2.name[1] = 'l';
    student2.name[2] = 'e';
    student2.name[3] = 'x';
    student2.name[4] = '\0';

    printf("\nStudent name is %s", student2.name);
    printf("\nStudent roll number is %d", student2.roll_no);
    return 0;
}