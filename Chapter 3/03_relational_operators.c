#include <stdio.h>

int main(void) {
    // -------------------------------------------------------------
    // TOPIC: Relational Operators in C
    // -------------------------------------------------------------
    // Relational operators compare two values (operands).
    // In C, a true condition evaluates to integer 1.
    // A false condition evaluates to integer 0.
    // There is NO operator '=>' or '=<'; always write '>=' or '<='.
    // '=' is for assignment, while '==' is for equality comparison.
    // -------------------------------------------------------------

    int a = 10;
    int b = 20;
    int c = 10;

    // 1. Equal to (==)
    // Checks if the left operand is equal to the right operand.
    // Evaluates to 1 if equal, 0 if not equal.
    printf("1. Equality (==):\n");
    printf("a == c : %d (True, 10 equals 10)\n", a == c);
    printf("a == b : %d (False, 10 does not equal 20)\n\n", a == b);

    // 2. Not equal to (!=)
    // Checks if the left operand is NOT equal to the right operand.
    // Evaluates to 1 if not equal, 0 if equal.
    printf("2. Not Equal to (!=):\n");
    printf("a != b : %d (True, 10 is not equal to 20)\n", a != b);
    printf("a != c : %d (False, 10 is equal to 10)\n\n", a != c);

    // 3. Greater than (>)
    // Checks if the left operand is strictly strictly greater than the right operand.
    printf("3. Greater Than (>):\n");
    printf("b > a  : %d (True, 20 is greater than 10)\n", b > a);
    printf("a > b  : %d (False, 10 is not greater than 20)\n", a > b);
    printf("a > c  : %d (False, 10 is equal, not strictly greater)\n\n", a > c);

    // 4. Less than (<)
    // Checks if the left operand is strictly less than the right operand.
    printf("4. Less Than (<):\n");
    printf("a < b  : %d (True, 10 is less than 20)\n", a < b);
    printf("b < a  : %d (False, 20 is not less than 10)\n\n", b < a);

    // 5. Greater than or equal to (>=)
    // NOTE: '=>' is a SYNTAX ERROR. Always write '>='.
    // Evaluates to 1 if left operand is either greater OR equal to right operand.
    printf("5. Greater Than or Equal to (>=):\n");
    printf("b >= a : %d (True, 20 is greater than 10)\n", b >= a);
    printf("a >= c : %d (True, 10 is equal to 10)\n", a >= c);
    printf("a >= b : %d (False, 10 is neither greater nor equal to 20)\n\n", a >= b);

    // 6. Less than or equal to (<=)
    // NOTE: '=<' is a SYNTAX ERROR. Always write '<='.
    // Evaluates to 1 if left operand is either less OR equal to right operand.
    printf("6. Less Than or Equal to (<=):\n");
    printf("a <= b : %d (True, 10 is less than 20)\n", a <= b);
    printf("a <= c : %d (True, 10 is equal to 10)\n", a <= c);
    printf("b <= a : %d (False, 20 is neither less nor equal to 10)\n\n", b <= a);

    // -------------------------------------------------------------
    // COMMON BEGINNER TRAPS & NOTES:
    // -------------------------------------------------------------
    // Trap 1: Using '=' instead of '==' inside if statements.
    // Example: if (a = 5) assigns 5 to 'a', evaluates to non-zero (True).
    // Correct: if (a == 5) compares 'a' with 5 without mutating 'a'.
    // 
    // Trap 2: Chaining comparisons like '5 < x < 10'.
    // In C, (5 < x < 10) evaluates (5 < x) first to 0 or 1,
    // then checks if (0 < 10) or (1 < 10), which is ALWAYS 1 (True).
    // Correct way: (5 < x && x < 10) using logical AND (&&).
    // -------------------------------------------------------------

    return 0;
}