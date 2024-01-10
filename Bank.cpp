#include "Bank.h"

void Bank::addCustomer(const Customer& customer) {
    customers.push_back(customer);
}

void Bank::processTransaction(const Transaction& transaction) {
    // Add transaction processing logic here
    // For simplicity, this example does not include a full implementation
}
