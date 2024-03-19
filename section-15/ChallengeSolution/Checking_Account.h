//
// Created by Ville on 19.3.2024.
//

#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "Account.h"


class Checking_Account : public Account {
  friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
private:
  static constexpr const char *def_name = "Unnamed Checking Account";
  static constexpr double def_balance = 0.0;
  static constexpr double per_check_fee = 1.5;

public:
  explicit Checking_Account(std::string name = def_name, double balance = def_balance);

  bool withdraw(double amount);
};


#endif //CHECKING_ACCOUNT_H
