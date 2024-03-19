//
// Created by Ville on 19.3.2024.
//

#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "Account.h"


class Savings_Account : public Account {
  friend std::ostream &operator<<(std::ostream &os, const Savings_Account &account);

private:
  static constexpr const char *def_name = "Unnamed Savings Account";
  static constexpr double def_balance = 0.0;
  static constexpr double def_interest_rate = 0.0;

protected:
  double interest_rate;

public:
  explicit Savings_Account(std::string name = def_name, double balance = def_balance, double interest_rate = def_interest_rate);

  bool deposit(double amount);
};


#endif //SAVINGS_ACCOUNT_H
