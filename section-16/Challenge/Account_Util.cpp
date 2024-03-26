#include <iostream>
#include "Account_Util.h"

void display(const std::vector<Account *> &accounts) {
    std::cout << "\n=== Accounts ===" << std::endl;
    for (const auto acc: accounts) {
        std::cout << *acc << std::endl;
    }
};

void deposit(std::vector<Account *> &accounts, const double amount) {
    std::cout << "\n=== Depositing to Accounts ===" << std::endl;
    for (auto acc: accounts) {
        acc->deposit(amount);
    }
};

void withdraw(std::vector<Account *> &accounts, double amount) {
    std::cout << "\n=== Withdrawing from Accounts ===" << std::endl;
    for (auto acc: accounts) {
        if (acc->withdraw(amount)) {
            std::cout << "Withdrew " << amount << " from " << *acc << std::endl;
        } else {
            std::cout << "Failed Withdrawal of " << amount << " from " << *acc << std::endl;
        }
    }
};
