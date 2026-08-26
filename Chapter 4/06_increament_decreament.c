// Topic: Comprehensive Unary & Compound Assignment Operators in C
// 1. Unary Operators (Step = 1):
//    - Postfix Increment (i++): "Use first, then increment" (Post = After)
//    - Prefix Increment  (++i): "Increment first, then use" (Pre = Before)
//    - Postfix Decrement (i--): "Use first, then decrement"
//    - Prefix Decrement  (--i): "Decrement first, then use"
// 2. Compound Assignment Operators (Step = N):
//    - Addition Assignment       (i += N) -> i = i + N
//    - Subtraction Assignment    (i -= N) -> i = i - N
//    - Multiplication Assignment (i *= N) -> i = i * N
//    - Division Assignment       (i /= N) -> i = i / N
//    - Modulo Assignment         (i %= N) -> i = i % N

#include <stdio.h>

int main() {
    int i = 10;
    printf("Initial value of i: %d\n\n", i); // Output: 10

    // -------------------------------------------------------------
    // PART 1: INCREMENT OPERATORS (+1)
    // -------------------------------------------------------------

    // 1. Postfix Increment (i++) -> Uses current value (10), then i becomes 11
    printf("1. Postfix (i++): %d\n", i++); // Output: 10
    printf("   Value after i++: %d\n\n", i); // Output: 11

    // 2. Prefix Increment (++i) -> Increments to 12 FIRST, then prints 12
    printf("2. Prefix (++i): %d\n", ++i);  // Output: 12
    printf("   Value after ++i: %d\n\n", i); // Output: 12

    // -------------------------------------------------------------
    // PART 2: DECREMENT OPERATORS (-1)
    // -------------------------------------------------------------

    // 3. Postfix Decrement (i--) -> Uses current value (12), then i becomes 11
    printf("3. Postfix (i--): %d\n", i--); // Output: 12
    printf("   Value after i--: %d\n\n", i); // Output: 11

    // 4. Prefix Decrement (--i) -> Decrements to 10 FIRST, then prints 10
    printf("4. Prefix (--i): %d\n", --i);  // Output: 10
    printf("   Value after --i: %d\n\n", i); // Output: 10

    // -------------------------------------------------------------
    // PART 3: COMPOUND ARITHMETIC ASSIGNMENT OPERATORS (Step by N)
    // -------------------------------------------------------------

    // 5. Addition Assignment (+=)
    i += 5; // Equivalent to: i = i + 5 -> 10 + 5 = 15
    printf("5. After (i += 5): %d\n", i); // Output: 15

    // 6. Subtraction Assignment (-=)
    i -= 3; // Equivalent to: i = i - 3 -> 15 - 3 = 12
    printf("6. After (i -= 3): %d\n", i); // Output: 12

    // 7. Multiplication Assignment (*=)
    i *= 2; // Equivalent to: i = i * 2 -> 12 * 2 = 24
    printf("7. After (i *= 2): %d\n", i); // Output: 24

    // 8. Division Assignment (/=)
    i /= 4; // Equivalent to: i = i / 4 -> 24 / 4 = 6
    printf("8. After (i /= 4): %d\n", i); // Output: 6

    // 9. Modulus / Remainder Assignment (%=)
    i %= 4; // Equivalent to: i = i % 4 -> Remainder of 6 / 4 = 2
    printf("9. After (i %= 4): %d\n", i); // Output: 2

    return 0;
}