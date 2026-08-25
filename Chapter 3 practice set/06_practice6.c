#include <stdio.h>

/*
 * Program: Find the Greatest of Four Numbers
 * Logic: Sequential Elimination Ladder via Transitivity
 */

int main(void) {
    int a, b, c, d;

    printf("Enter four integers separated by spaces: ");
    if (scanf("%d %d %d %d", &a, &b, &c, &d) != 4) {
        printf("Invalid input. Please enter four valid integers.\n");
        return 1;
    }

    /*
     * Step 1: Check if 'a' is strictly greater than 'b', 'c', and 'd'.
     * - If True:  'a' beat all other numbers -> 'a' is the unique largest.
     * - If False: 'a' failed to beat at least one number -> 'a' is eliminated from being the unique maximum.
     */
    if (a > b && a > c && a > d) {
        printf("The largest number is %d\n", a);
    }
    /*
     * Step 2: 'a' is eliminated. Check if 'b' is greater than 'c' and 'd'.
     * - If True:  b > c and b > d.
     *             Could 'a' be larger than 'b'? No. If a > b, then by transitivity
     *             (a > b > c and a > b > d), 'a' would have beaten all three, and Step 1
     *             would have executed. Because Step 1 was skipped, 'a' cannot be greater than 'b'.
     *             Therefore, 'b' is guaranteed to be the largest.
     * - If False: 'b' is eliminated from being the unique maximum.
     */
    else if (b > c && b > d) {
        printf("The largest number is %d\n", b);
    }
    /*
     * Step 3: 'a' and 'b' are both eliminated. Check if 'c' is greater than 'd'.
     * - If True:  'c' beats the only remaining competitor 'd', and by transitivity cannot
     *             be smaller than 'a' or 'b' -> 'c' is the largest.
     * - If False: 'c' is eliminated.
     */
    else if (c > d) {
        printf("The largest number is %d\n", c);
    }
    /*
     * Step 4: 'a', 'b', and 'c' have all been eliminated in sequence.
     * - The only remaining candidate left standing is 'd'.
     */
    else {
        printf("The largest number is %d\n", d);
    }

    return 0;
}