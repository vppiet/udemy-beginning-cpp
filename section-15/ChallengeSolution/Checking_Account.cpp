//
// Created by Ville on 19.3.2024.
//

#include "Checking_Account.h"

std::ostream &operator<<(std::ostream &os, const Checking_Account &account) {
  os << "[Checking_Account: " << account.name << ": " << account.balance << "]";;
  return os;
}

Checking_Account::Checking_Account(const std::string name, const double balance)
  : Account{name, balance} {
}

bool Checking_Account::withdraw(double amount) {
  amount += per_check_fee;
  return Account::withdraw(amount);
}
