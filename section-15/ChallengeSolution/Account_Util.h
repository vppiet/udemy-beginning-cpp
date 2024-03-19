//
// Created by Ville on 19.3.2024.
//

#ifndef ACCOUNT_UTIL_H
#define ACCOUNT_UTIL_H
#include <vector>

#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"

void display(const std::vector<Account> &accounts);

void deposit(std::vector<Account> &accounts, double amount);

void withdraw(std::vector<Account> &accounts, double amount);

void display(const std::vector<Savings_Account> &accounts);

void deposit(std::vector<Savings_Account> &accounts, double amount);

void withdraw(std::vector<Savings_Account> &accounts, double amount);

void display(const std::vector<Checking_Account> &accounts);

void deposit(std::vector<Checking_Account> &accounts, double amount);

void withdraw(std::vector<Checking_Account> &accounts, double amount);

void display(const std::vector<Trust_Account> &accounts);

void deposit(std::vector<Trust_Account> &accounts, double amount);

void withdraw(std::vector<Trust_Account> &accounts, double amount);

#endif //ACCOUNT_UTIL_H
