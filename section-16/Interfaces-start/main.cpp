#include <iostream>

class Printable {
  friend std::ostream &operator<<(std::ostream &os, const Printable &obj);

public:
  virtual void print(std::ostream &os) const = 0;
};

std::ostream &operator<<(std::ostream &os, const Printable &obj) {
  obj.print(os);
  return os;
}

class Account : public Printable {
public:
  virtual void withdraw(double amount) {
    std::cout << "In Account::withdraw" << std::endl;
  }

  void print(std::ostream &os) const override {
    os << "Account display";
  };

  virtual ~Account() {
  };
};

class Checking : public Account {
public:
  virtual void withdraw(double amount) {
    std::cout << "In Checking::withdraw" << std::endl;
  }

  void print(std::ostream &os) const override {
    os << "Checking display";
  };

  virtual ~Checking() {
  };
};

class Savings : public Account {
public:
  virtual void withdraw(double amount) {
    std::cout << "In Savings::withdraw" << std::endl;
  }

  void print(std::ostream &os) const override {
    os << "Savings display";
  };

  virtual ~Savings() {
  };
};

class Trust : public Account {
public:
  virtual void withdraw(double amount) {
    std::cout << "In Trust::withdraw" << std::endl;
  }


  void print(std::ostream &os) const override {
    os << "Trust display";
  };

  virtual ~Trust() {
  };
};

class Dog : public Printable {
public:
  void print(std::ostream &os) const override {
    os << "Woof woof";
  };

  virtual ~Dog() {
  }
};

int main() {
  // Account a;
  // std::cout << a << std::endl;
  //
  // Checking c;
  // std::cout << c << std::endl;
  //
  // Savings s;
  // std::cout << s << std::endl;
  //
  // Trust t;
  // std::cout << t << std::endl;

  Dog *dog = new Dog();
  std::cout << *dog << std::endl;

  Account *p1 = new Account();
  std::cout << *p1 << std::endl;

  Account *p2 = new Checking();
  std::cout << *p2 << std::endl;

  delete dog;
  delete p1;
  delete p2;

  return 0;
}
