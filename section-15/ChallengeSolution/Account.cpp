//
// Created by Ville on 19.3.2024.
//

#include "Account.h"

Account::Account(std::string name, double balance)
  : name{name}, balance{balance} {
}

bool Account::deposit(double amount) {
  if (amount < 0) {
    return false;
  }

  balance += amount;
  return true;
}

bool Account::withdraw(double amount) {
  if (balance - amount >= 0) {
    balance -= amount;
    return true;
  }

  return false;
}

double Account::get_balance() const {
  return balance;
}

std::ostream &operator<<(std::ostream &os, const Account &account) {
  os << "[Account: " << account.name << ": " << account.balance << "]";
  return os;
}
