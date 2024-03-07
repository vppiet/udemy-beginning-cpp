#ifndef MYSTRING_H
#define MYSTRING_H
#include <ostream>

class Mystring {
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);

    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

    char *str;

public:
    Mystring();

    Mystring(const char *s);

    Mystring(const Mystring &source);

    Mystring(Mystring &&source);

    ~Mystring();

    Mystring &operator=(const Mystring &rhs); // copy assignment
    Mystring &operator=(Mystring &&rhs) noexcept; // move assignment

    void display() const;

    int get_length() const;

    const char *get_str() const;
};

#endif //MYSTRING_H
