#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int=100);

void print(double);

void print(string);

void print(string, string);

void print(vector<string>);

void print(int num) {
    cout << "Printing int: " << num << endl;
}

void print(double num) {
    cout << "Printing double: " << num << endl;
}

void print(string s) {
    cout << "Printing string: " << s << endl;
}

void print(string s, string t) {
    cout << "Printing 2 strings: " << s << " and " << t << endl;
}

void print(vector<string> v) {
    cout << "Printing vector of strings: ";
    for (auto s: v)
        cout << s + " ";
    cout << endl;
}

int main() {
    print();
    print(100);
    print('A'); // char is promoted to int, ASCII A = 65

    print(123.5);
    print(123.3F); // float is promoted to double

    print("C-style string"); // C-style string is converted to a C++ string

    string s{"C++ string"};
    print(s);

    print("C-style string", s);

    vector<string> three_stooges{"Larry", "Moe", "Curly"};
    print(three_stooges);

    return 0;
}
