//
// Created by Ville on 19.3.2024.
//

#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "Account.h"


class Savings_Account: public Account {
  friend std::ostream &operator<<(std::ostream &os, const Savings_Account &account);
protected:
  double interest_rate;
public:
  Savings_Account();
  Savings_Account(double balance, double interest_rate);
  void deposit(double amount);
};



#endif //SAVINGS_ACCOUNT_H
