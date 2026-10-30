// we use fprintf to write data to a file in C. The fprintf function is similar to printf, but instead of printing to the standard output (console), it writes formatted output to a specified file stream. It takes a file pointer (FILE *), a format string, and additional arguments to specify the data to be written. In this case, it writes an integer to the file pointed to by fptr.

#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("dazai.txt", "w");
    int num = 143;
    fprintf(fptr, "%d", num);
    return 0;
}