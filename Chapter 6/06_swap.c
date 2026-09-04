// This program demonstrates how to swap two integers using pointers in C. The `swapCorrect` function takes two integer pointers as parameters, allowing it to modify the original values of the integers passed to it. In the `main` function, we declare two integers `x` and `y`, initialize them, and then call `swapCorrect` with their addresses. After the function call, the values of `x` and `y` are swapped.

void swapCorrect(int *a, int *b) { // *a means value at a.
    int temp = *a; // Read value at address 'a' and store it as temp
    *a = *b;       // Put value from address 'b' into address 'a'
    *b = temp;     // Put saved value into address 'b'
}

int main(void) {
    int x = 5, y = 10;
    swapCorrect(&x, &y); // x becomes 10, y becomes 5, and we need to pass the address instad of the direct value cuz if we pass the value the function takes a copy but if we pass the address it will take the original value and change it.
    return 0;
}