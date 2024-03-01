#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring {
    char *str;

public:
    Mystring();

    Mystring(const char *s);

    Mystring(const Mystring &source);

    Mystring(Mystring &&source);

    ~Mystring();

    Mystring &operator=(const Mystring &rhs); // copy assignment
    Mystring &operator=(Mystring &&rhs) noexcept ; // move assignment

    bool operator==(const Mystring &rhs) const;
    Mystring operator-() const;  // make lowercase
    Mystring operator+(const Mystring &rhs) const;  // concatenate

    void display() const;

    int get_length() const;

    const char *get_str() const;
};

#endif //MYSTRING_H
