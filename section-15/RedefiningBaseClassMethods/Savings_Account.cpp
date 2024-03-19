//
// Created by Ville on 19.3.2024.
//

#include "Savings_Account.h"

Savings_Account::Savings_Account(double balance, double interest_rate)
  : Account{balance}, interest_rate{interest_rate} {
}

Savings_Account::Savings_Account()
  : Savings_Account{0.0, 0.0} {
}

void Savings_Account::deposit(double amount) {
  amount = amount + (amount * interest_rate / 100);
  Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &account) {
  os << "Savings account balance: " << account.balance << " Interest rate: " << account.interest_rate;
  return os;
}
