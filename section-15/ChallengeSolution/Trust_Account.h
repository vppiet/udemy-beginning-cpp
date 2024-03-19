//
// Created by Ville on 19.3.2024.
//

#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H
#include "Savings_Account.h"


class Trust_Account : public Savings_Account {
  friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);

private:
  static constexpr const char *def_name = "Unnamed Trust Account";
  static constexpr double def_balance = 0.0;
  static constexpr double def_interest_rate = 3.0;
  static constexpr double bonus_amount = 50.0;
  static constexpr double bonus_threshold = 5000.0;
  static constexpr int max_withdrawals = 3;
  static constexpr double max_withdraw_percent = 0.2;

protected:
  int num_withdrawals{0};

public:
  explicit Trust_Account(std::string name = def_name, double balance = def_balance,
                         double interest_rate = def_interest_rate);

  bool deposit(double amount);

  bool withdraw(double amount);
};


#endif //TRUST_ACCOUNT_H
