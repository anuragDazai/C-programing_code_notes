// If S[3]  is a 1-D array of integers then *(S+3)  refers to the third element:
// i. True.
// ii. False.
// iii. Depends.

// The correct answer is:
// ii. False.

// because. In C, array indexing starts at 0. Therefore, S[3] refers to the fourth element of the array, not the third. The expression *(S+3) also refers to the fourth element, as it adds 3 to the base address of the array S. To refer to the third element, you would use *(S+2) or S[2].

// so it adds to the base of the element which refers to the s+3 = 4th element