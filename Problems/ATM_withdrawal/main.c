#include "../Common/headers.h"

/**
 * Problem: ATM_Withdrawal
 * 
 * Functions: 
 * 1. Withdraw 
 * 2. Deposit 
 * 3. Show Details
 */

float balance = 0;

void withdraw(){
    int amount;

    printf("Enter the amount to withdraw: ");
    scanf("%d", &amount);

    // Base case 
    if(amount <= 0){
        puts("Invalid amount!!");
        return;
    }

    if(amount <= balance){
        balance -= amount;
        printf("\n%d Amnt is withdrew.", amount);
    }else{
        puts("Amnt is larger than existing balance.");
    }
}

void deposit(){
    int amount; 

    printf("Enter the amount to deposit: ");
    scanf("%d", &amount);

    // Base case 
    if(amount <= 0){
        puts("Invalid amount!!");
        return;
    }

    balance += amount;
    printf("\n%d Amnt is deposited.", amount);
}

void showDetails(){
    printf("\nBalance Amount: %.2f", balance);
}

int main() {
    int choice;

    printf("Virtual ATM\n");

    while(1){
        puts("\nEnter your choice: ");
        puts("1. Deposit");
        puts("2. Withdraw");
        puts("3. Show Details");
        puts("4. Exit");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                deposit();
            break;

            case 2:
                withdraw();
            break;

            case 3:
                showDetails();
            break;

            case 4:
                puts("Exiting the program...");
                exit(0);
            break;

            default: 
                puts("Invalid choice!!");
            break;
        }
    }
    
    return 0;
}