#include <stdio.h>
#include <string.h>

struct Account {
    char name[50];
    char iban[34];
    int balance;
};

void create(struct Account *account, const char *name, char *iban, int balance);

void deposit(struct Account *account, int balance);

void withdraw(struct Account *account, int balance);

void balance(struct Account account);

int main() {
    struct Account account1;

    create(&account1, "Enes Buyuk", "TRx1234567891011121314151617181920", 100);

    int choice;
    int money;

    do {
        printf("\n=============================\nExample of Bank Application\n=============================\n");
        printf("---- Welcome %s. Your balance: %d\n", account1.name, account1.balance);
        printf("-MENU:\n-- 1. Money Deposit\n");
        printf("-- 2. Money Withdraw\n");
        printf("-- 3. Balance Inquiry\n");
        printf("-- 4. Exit\n");
        printf("Make your choice:");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Money to deposit:");
                scanf("%d", &money);
                deposit(&account1, money);
                break;
            case 2:
                printf("Money to withdraw money: ");
                scanf("%d", &money);
                withdraw(&account1, money);
                break;
            case 3:
                balance(account1);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Your choice is invalid. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

void create(struct Account *account, const char *name, char *iban, int balance) {
    strcpy(account->name, name);
    strcpy(account->iban, iban);
    account->balance = balance;
}

void deposit(struct Account *account, int money) {
    account->balance += money;
    printf("%d was deposited. New balance is %d $\n", money, account->balance);
}

void withdraw(struct Account *account, int money) {
    if (money > account->balance) {
        printf("Insufficient funds in the account!\n");
    } else {
        account->balance -= money;
        printf("%d $ was withdrawed. New balance is: %d $\n", money, account->balance);
    }
}

void balance(struct Account account) {
    printf("The balance of the Account: %d $\n", account.balance);
}
