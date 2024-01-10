#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "Customer.h"
#include "Account.h"

enum class TransactionType {
    DEPOSIT,
    WITHDRAWAL
};

class Transaction {
public:
    Transaction(const Customer& customer, const Account& account, TransactionType type, double amount);

private:
    const Customer& customer;
    const Account& account;
    TransactionType type;
    double amount;
};

#endif // TRANSACTION_H
