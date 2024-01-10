#include <iostream>
#include "Bank.h"
#include "Customer.h"
#include "Account.h"
#include "Transaction.h"

int main() {
    // Create a bank
    Bank bank;

    // Create customers
    Customer customer1("John Doe");
    Customer customer2("Jane Smith");

    // Create accounts
    Account account1(1000);
    Account account2(500);

    // Add accounts to customers
    customer1.addAccount(account1);
    customer2.addAccount(account2);

    // Add customers to the bank
    bank.addCustomer(customer1);
    bank.addCustomer(customer2);

    // Create and process transactions
    Transaction transaction1(customer1, account1, TransactionType::WITHDRAWAL, 200);
    Transaction transaction2(customer2, account2, TransactionType::DEPOSIT, 300);

    bank.processTransaction(transaction1);
    bank.processTransaction(transaction2);

    // Display account balances
    std::cout << "Customer 1 Balance: $" << account1.getBalance() << std::endl;
    std::cout << "Customer 2 Balance: $" << account2.getBalance() << std::endl;

    return 0;
}
