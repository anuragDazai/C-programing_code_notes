#include <stdio.h>

/*
    #include <stdio.h>
    ------------------

    #include → Preprocessor directive.
    It tells the preprocessor to include a header file
    before the compilation process.

    stdio.h → Header file.
    stdio = standard input/output
    .h = header file

    It contains declarations for standard I/O functions
    such as printf() and scanf().

    Remember:

        #include → instruction
        stdio.h  → header to include
*/


int main()
{
    /*
        int → return type.
        It means main() returns an integer.

        main() → Entry point of a normal C program.
        Program execution starts from main().

        { } → Marks the beginning and end of main()'s body.
    */


    printf("Hello, World!\n");

    /*
        printf() → Function used to print formatted output.

        "Hello, World!"
        → String literal (text inside double quotes).

        \n → New line.

        printf() is provided by the C standard library,
        and stdio.h provides its declaration.
    */


    return 0;

    /*
        return → Ends the current function and returns a value.

        0 → Integer value returned by main().

        return 0; → main() finishes and the program ends.
        It commonly represents successful completion.
    */
}


/*
    QUICK REMEMBER:

    #include  → Include a header
    stdio.h   → Standard I/O header file that the preprocessor includes and ts contains the code.
    int       → main() returns an integer
    main()    → Program entry point
    { }       → Function body
    printf()  → Print output
    "..."     → String literal
    \n        → New line
    ;         → Ends most statements
    return 0  → End main() and return 0
*/