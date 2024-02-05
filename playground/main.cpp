#include <iostream>
#include <string>

using namespace std;

void swap(int &a, int &b);

void foo(string &);

int main() {
    int x{10}, y{20};
    cout << x << " " << y << endl;
    swap(x, y);
    cout << x << " " << y << endl;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
