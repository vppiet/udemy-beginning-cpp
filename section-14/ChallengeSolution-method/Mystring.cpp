#include <iostream>
#include <cstring>
#include "Mystring.h"

// No-args constructor
Mystring::Mystring()
  : str{nullptr} {
  str = new char[1];
  *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s)
  : str{nullptr} {
  if (s == nullptr) {
    str = new char[1];
    *str = '\0';
  } else {
    str = new char[strlen(s) + 1];
    strcpy(str, s);
  }
}

// Copy constructor
Mystring::Mystring(const Mystring &source)
  : str{nullptr} {
  str = new char[strlen(source.str) + 1];
  strcpy(str, source.str);
  //       std::cout << "Copy constructor used" << std::endl;
}

// Move constructor
Mystring::Mystring(Mystring &&source)
  : str(source.str) {
  source.str = nullptr;
  //        std::cout << "Move constructor used" << std::endl;
}

// Destructor
Mystring::~Mystring() {
  delete [] str;
}

// Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
  //    std::cout << "Using copy assignment" << std::endl;

  if (this == &rhs)
    return *this;
  delete [] str;
  str = new char[strlen(rhs.str) + 1];
  strcpy(str, rhs.str);
  return *this;
}

// Move assignment
Mystring &Mystring::operator=(Mystring &&rhs) {
  //   std::cout << "Using move assignment" << std::endl;
  if (this == &rhs)
    return *this;
  delete [] str;
  str = rhs.str;
  rhs.str = nullptr;
  return *this;
}

bool Mystring::operator==(const Mystring &rhs) const {
  return std::strcmp(str, rhs.str) == 0;
}

bool Mystring::operator!=(const Mystring &rhs) const {
  return std::strcmp(str, rhs.str) != 0;
}

bool Mystring::operator<(const Mystring &rhs) const {
  return std::strcmp(str, rhs.str) < 0;
}

bool Mystring::operator>(const Mystring &rhs) const {
  return std::strcmp(str, rhs.str) > 0;
}

Mystring Mystring::operator-() const {
  char *buffer = new char[std::strlen(str) + 1];
  std::strcpy(buffer, str);
  for (size_t i = 0; i < std::strlen(str); ++i) {
    buffer[i] = std::tolower(buffer[i], std::locale());
  }

  Mystring temp{buffer};
  delete[] buffer;
  return temp;
}

Mystring Mystring::operator+(const Mystring &rhs) const {
  char *buffer = new char[std::strlen(str) + std::strlen(rhs.str) + 1];
  std::strcpy(buffer, str);
  std::strcat(buffer, rhs.str);
  Mystring temp{buffer};
  return temp;
}

Mystring &Mystring::operator+=(const Mystring &rhs) {
  *this = *this + rhs;
  return *this;
}

Mystring Mystring::operator*(const int n) const {
  char *buffer = new char[std::strlen(str) * n + 1];
  strcpy(buffer, "");
  for (int i = 0; i < n; ++i) {
    std::strcat(buffer, str);
  }

  Mystring temp{buffer};
  delete [] buffer;
  return temp;
}

Mystring &Mystring::operator*=(const int n) {
  *this = *this * n;
  return *this;
}

Mystring &Mystring::operator++() {
  for (size_t i = 0; i < std::strlen(str); ++i) {
    str[i] = std::toupper(str[i], std::locale());
  }

  return *this;
}

Mystring Mystring::operator++(int) {
  Mystring temp{*this};
  operator++();
  return temp;
}

// Display method
void Mystring::display() const {
  std::cout << str << " : " << get_length() << std::endl;
}

// getters
int Mystring::get_length() const { return strlen(str); }
const char *Mystring::get_str() const { return str; }

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
  os << rhs.str;
  return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs) {
  char *buff = new char[1000];
  in >> buff;
  rhs = Mystring{buff};
  delete [] buff;
  return in;
}
