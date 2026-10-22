// Write a program to encrypt a string by adding 1 to the ASCII value of its characters

#include <stdio.h>


void encrypt(char *str){ // it takes the arrray pointer as an argument
    for(int i = 0; str[i] != '\0'; i++){
        str[i] = str[i] + 1; // we are adding 1 to the ASCII value of each character in the string, and then it's keep storing into the same string. So, the original string will be modified.
    }
    printf("Encrypted string: %s\n", str);
}

int main(){
    char str[] = {"Anurag is a good boy."};
    encrypt(str);
    printf("Original string: %s\n", str); // the original string will be modified because we are passing the array pointer to the function. So, the original string will be modified.
    return 0;
}