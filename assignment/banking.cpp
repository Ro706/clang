int main() {
    struct Customer customers[MAX_CUSTOMERS];
    int num_customers = 0;
    int i;
    int account_number;
    float amount;
    int code;

    // Print customers with balance below 100
    printf("Customers with balance below 100:\n");
    for (i = 0; i < num_customers; i++) {
        if (customers[i].balance < 100) {
            printf("Account number: %d, Name: %s\n", customers[i].account_number, customers[i].name);
        }
    }

    // Process withdrawal or deposit
    printf("Enter account number, amount, and code (1 for deposit, 0 for withdrawal): ");
    scanf("%d %f %d", &account_number, &amount, &code);

    for (i = 0; i < num_customers; i++) {
        if (customers[i].account_number == account_number) {
            if (code == 1) {
                customers[i].balance += amount;
            } else if (code == 0) {
                if (customers[i].balance < amount) {
                    printf("The balance is insufficient for the specified withdrawal.\n");
                } else {
                    customers[i].balance -= amount;
                }
            }
            break;
        }
    }

    return 0;
}
