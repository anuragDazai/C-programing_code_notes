    // Calculate income tax paid by an employee to the government as per the slabs
    // mentioned below:
    // Income SlabTax
    // 2.5 - 5.0L5%
    // 5.0L - 10.0L20%
    // Above 10.0L30%
    // Note that there is no tax below 2.5L. Take income amount as an input from the user.

    #include <stdio.h>

    int main(){
        int income;
        printf("Enter your income in whole number amount: ");
        scanf("%d", &income);
        if((income >=250000)&&(income<=500000)){
            printf("you come umder tax slab of 5%%");
        }
        else if((income>500000)&&(income<=1000000)){
            printf("You come under tax slab of 20%%");
        }
        else if(income<250000){
            printf("You don't need to pay taxes");
        }
        else{
            printf("You come under tax slab of 30%%");
        }
        return 0;
    }