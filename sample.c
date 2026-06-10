#include <stdio.h>

float balance = 1000.0;

void checkBalance() {
    printf("Current Balance: Rs. %.2f\n", balance);
}

void deposit(float amount) {
    balance += amount;
    printf("Rs. %.2f deposited successfully.\n", amount);
}

void withdraw(float amount) {
    if (amount <= balance) {
        balance -= amount;
        printf("Rs. %.2f withdrawn successfully.\n", amount);
    } else {
        printf("Insufficient Balance!\n");
    }
}

int main() {
    int choice;
    float amount;

    do {
        printf("\n--- BANK MANAGEMENT SYSTEM ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                checkBalance();
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                deposit(amount);
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                withdraw(amount);
                break;

            case 4:
                printf("Thank you for using the Bank System!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}