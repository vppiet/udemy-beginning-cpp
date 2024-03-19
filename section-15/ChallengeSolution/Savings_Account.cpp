//
// Created by Ville on 19.3.2024.
//

#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string name, double balance, double interest_rate)
  : Account{name, balance}, interest_rate{interest_rate} {
}

bool Savings_Account::deposit(double amount) {
  amount = amount + amount * (interest_rate / 100);
  return Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &account) {
  os << "[Savings_Account: " << account.name << ": " << account.balance << ", " << account.interest_rate << "%]";
  return os;
}
