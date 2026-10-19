// so we gonna access the elements of a array using pointers, like we initialize the first element as a var and then use pointer arethmetic to access the proceeding next elements.


 #include <stdio.h>

int main() {
    int marks[] = {34, 43, 34, 56};

    // Store the address of the first array element in a pointer.
    // &marks[0] gives the memory address of the first element.
    int *ptr = &marks[0];
    // int *ptr = &marks[0]; is same as "int *ptr = marks;" because the name of the array (marks) itself represents the address of the first element.


    for (int i = 0; i < 4; i++) {

        // ptr stores the address of the current array element.
        // %p is used to print memory addresses.
        // (void *) converts the pointer to the required type for %p.
        printf("Value: %d | Address: %p\n", *ptr, (void *)ptr);
        printf("Value: %d \n", *ptr); // Dereference the pointer to get the value of the current array element.

        // Move the pointer to the next array element.
        // It advances by sizeof(int) bytes, not just 1 byte.
        ptr++;
    }

    return 0;
}