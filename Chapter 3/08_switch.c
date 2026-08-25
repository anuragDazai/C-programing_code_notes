#include <stdio.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    switch(a){ // switch statements will execute itself and the next other blocks below it if not break; added, here if we enter 1, it will print "You entered One" and then it will also print "You entered Two", "You entered Three", "You entered Four" and "You entered a number greater than 4" because there is no break; statement after the first case block. So, to avoid this we need to add break; statement after each case block.
        // so switch statements execute all the blocks below the case block that is satisfied until it finds a break; statement or the end of the switch statement.
        case 1:
            printf("You entered One\n");
            break; // we add break; statement here to avoid executing the next case blocks.
        case 2:
            printf("You entered Two\n");
        case 3:
            printf("You entered Three\n");
        case 4:
            printf("You entered Four\n");
        default:
            printf("You entered a number greater than 4\n");
    }
    return 0;
}

// int expression;
// switch (expression) {
//     case constant1:
        // Code executed if expression == constant1
//         break;
//     case constant2:
        // Code executed if expression == constant2
//         break;
//     default:
        // Code executed if no cases match
//         break;
// }