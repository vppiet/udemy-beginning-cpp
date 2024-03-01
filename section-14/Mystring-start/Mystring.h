#ifndef MYSTRING_H
#define MYSTRING_H
#include <string>

class Mystring {
    char *str;

public:
    Mystring();

    Mystring(const char *s);

    Mystring(const Mystring &source);

    ~Mystring();

    void display() const;

    int get_length() const;

    const char *get_str() const;
};

#endif //MYSTRING_H
