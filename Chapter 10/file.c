// A file is a named collection of data stored on a computer or other electronic device, treated as a single unit by the system for storage, management, and retrieval.  Files serve as digital containers for various types of information, including text documents, images, videos, audio, and executable programs. 
// so RAM doesn't store files, it only temporarily holds data that is actively being used or processed by the computer's CPU. When a file is opened, its contents are loaded from storage (like a hard drive or SSD) into RAM for quick access and manipulation. Once the file is closed, any changes made can be saved back to storage, and the data in RAM is cleared to free up space for other tasks.
// but a file is stored in persistent storage, such as a hard drive, solid-state drive (SSD), or other non-volatile memory. This allows files to be retained even when the computer is powered off, ensuring that data can be accessed and used at a later time.
// Defination of file: A file is a collection of data or information that is stored on a computer or other electronic device. It is identified by a unique name and can contain various types of content, such as text, images, audio, video, or executable code. Files are managed by the operating system and can be created, modified, read, and deleted by users or applications.

// In C when we run a program it runs in the RAM and the data and variables used during a single runtime vanishes as the program terminates. however, File I/O (Input/Output) allows a program to store and retrieve data from files on permanent storage.

// In C, we use a pointer of type FILE to work with a file.
// FILE *fp;

#include <stdio.h>
int main() {
    FILE *fptr; // Declare a file pointer, a file pointer is a variable that holds the address of a FILE object, which represents an open file in C. It is used to perform various file operations, such as reading from or writing to a file. The FILE pointer allows the program to interact with the file system and manage files effectively.
    fptr = fopen("dazai.txt", "r"); // we already saved up the space for a file usign a file pointer, now we can use the file methods to operate on a file.
    int num;
    fscanf(fptr, "%d", &num); // fscanf is a function in C that reads formatted input from a file. It is similar to the scanf function, but instead of reading from standard input (keyboard), it reads from a specified file stream. The function takes a file pointer (FILE *), a format string, and additional arguments to store the read values. In this case, it reads an integer from the file pointed to by fptr and stores it in the variable num.
    printf("The number is: %d\n", num); 
    fscanf(fptr, "%d", &num);
    printf("The number is: %d\n", num); // When reading a file in C, the file pointer (or file descriptor offset) automatically advances to the next position after each read operation.  This behavior ensures sequential access, meaning the program reads the next character, string, or formatted value immediately following the previous one.

    
    fclose(fptr); // fclose is a function in C that closes an open file. It takes a file pointer (FILE *) as an argument, which represents the file to be closed. Closing a file is important to free up system resources and ensure that any buffered data is written to the file before it is closed. After calling fclose, the file pointer becomes invalid, and further operations on that file pointer should be avoided.
    return 0;
}