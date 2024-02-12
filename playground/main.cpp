#include <iostream>

using namespace std;

int main() {
    const int num{10};

    cout << "Value of num is: " << num << endl;
    cout << "sizeof of num is: " << sizeof(num) << endl;
    cout << "Address of num is: " << &num << endl;

    int *p;
    cout << "Value of p is: " << p << endl;
    cout << "sizeof of p is: " << sizeof(p) << endl;
    cout << "Address of p is: " << &p << endl;
    p = nullptr;
    cout << "Value of p is: " << p << endl;

    return 0;
}
