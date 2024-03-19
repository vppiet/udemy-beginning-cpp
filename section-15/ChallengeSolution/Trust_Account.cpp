//
// Created by Ville on 19.3.2024.
//

#include "Trust_Account.h"

std::ostream &operator<<(std::ostream &os, const Trust_Account &account) {
  os << "[Trust_Account: " << account.name << ": " << account.balance << ", " << account.interest_rate <<
      "%, withdrawals: " << account.num_withdrawals << "]";
  return os;
}

Trust_Account::Trust_Account(std::string name, const double balance, const double interest_rate)
  : Savings_Account(name, balance, interest_rate) {
}

bool Trust_Account::deposit(double amount) {
  if (amount >= bonus_threshold) {
    amount += bonus_amount;
  }

  return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount) {
  if (num_withdrawals == max_withdrawals) {
    return false;
  }

  if (amount / balance > max_withdraw_percent) {
    return false;
  }

  if (Savings_Account::withdraw(amount)) {
    ++num_withdrawals;
    return true;
  }

  return false;
}
