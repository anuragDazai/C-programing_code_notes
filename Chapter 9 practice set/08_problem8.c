// Create a structure representing a bank account of a customer. What fields did you use and why?

#include <stdio.h>
typedef struct BankAccount {
    char accountHolderName[50]; // To store the name of the account holder
    int accountNumber;          // To uniquely identify the bank account
    float balance;              // To keep track of the current balance in the account
    char accountType[20];       // To specify the type of account (e.g., Savings, Checking)
} BankAccount;

int main(){
    BankAccount account1 = {"John Doe", 12345, 1000.00, "Savings"}; // Create an instance of BankAccount
    printf("Account Holder: %s\n", account1.accountHolderName);
    printf("Account Number: %d\n", account1.accountNumber);
    printf("Account Balance: %.2f\n", account1.balance);
    printf("Account Type: %s\n", account1.accountType);
    return 0;
}
// TODO: So we can further implement the functionality of the bank account, such as deposit, withdraw, and display account details.
// * And we can add the function to manually input from the user to create a new bank account and store it in an array of BankAccount structures.