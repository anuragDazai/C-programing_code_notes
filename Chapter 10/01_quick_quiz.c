// Modify the program above to check whether the file exists or not before opening the file.

#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("dazaiu.txt", "r");
    if(ptr == NULL){
        printf("File does not exist.\n");
    } else {
        printf("File exists and is opened successfully.\n");
        fclose(ptr); // Close the file if it was opened successfully
    }
    printf("ptr = %p\n", ptr); // this returns a null pointer if the file doesn't exist, otherwise it returns a valid pointer to the file, null pointer means 000000 it's the absence of a value, and a valid pointer means the presence of a value.
    return 0;
}