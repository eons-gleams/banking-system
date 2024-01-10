#include "Transaction.h"

Transaction::Transaction(const Customer& customer, const Account& account, TransactionType type, double amount)
    : customer(customer), account(account), type(type), amount(amount) {}
