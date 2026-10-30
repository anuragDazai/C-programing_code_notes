// we use fgetc to read data from a file in C. The fgetc function reads a single character from the specified file stream and returns it as an integer. If the end of the file is reached or an error occurs, it returns EOF (End Of File). In this case, we will read characters from the file pointed to by fptr.

#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("dazai.txt", "w");
    // char c = fgetc(ptr); // it reads the first character from the file.
    // printf("The character read from the file is: %c\n", c);
    fputc('A', ptr); // it writes the character 'A' to the file.
    fclose(ptr);
    return 0;
}