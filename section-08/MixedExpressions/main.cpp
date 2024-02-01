#include <iostream>

using namespace std;

int main() {
    int sum {};
    int num1 {}, num2 {}, num3 {};
    const int count {3};

    cout << "Enter 3 integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;

    sum = num1 + num2 + num3;

    double average {0.0};
    average = static_cast<double>(sum) / count;

    cout << "The 3 numbers were: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "The sum of the numbers is: " << sum << endl;
    cout << "The average of the numbers is: " << average << endl;

    return 0;
}
