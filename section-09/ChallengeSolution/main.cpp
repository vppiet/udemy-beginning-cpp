#include <vector>
#include <iomanip>
#include <iostream>
#include <limits>

using namespace std;

int main() {
    vector<int> numbers{};
    char user_operation{};

    cout << fixed << setprecision(2);

    do {
        cout << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << endl;

        cout << "Enter your choice: ";
        cin >> user_operation;
        user_operation = tolower(user_operation, locale());

        if (user_operation == 'p') {
            if (numbers.empty()) {
                cout << "\n[] - the list is empty";
            } else {
                cout << "\n[ ";
                for (const int num: numbers) {
                    cout << num << " ";
                }

                cout << "]";
            }
        } else if (user_operation == 'a') {
            int user_number{};

            cout << "Enter an integer to add to the list: ";
            cin >> user_number;
            numbers.push_back(user_number);

            cout << user_number << " added";
        } else if (user_operation == 'm') {
            if (numbers.empty()) {
                cout << "Unable to calculate the mean - no data" << endl;
            } else {
                int sum{};

                for (const int num: numbers) {
                    sum += num;
                }

                double mean{};
                mean = static_cast<double>(sum) / numbers.size();
                cout << "Mean: " << mean << endl;
            }
        } else if (user_operation == 's') {
            if (numbers.empty()) {
                cout << "Unable to determine the smallest number - list is empty" << endl;
            } else {
                int smallest{numeric_limits<int>::max()};

                for (const int num: numbers) {
                    if (num < smallest) {
                        smallest = num;
                    }
                }

                cout << "The smallest number is " << smallest << endl;
            }
        } else if (user_operation == 'l') {
            if (numbers.empty()) {
                cout << "Unable to determine the largest number - list is empty" << endl;
            } else {
                int largest{numeric_limits<int>::min()};

                for (const int num: numbers) {
                    if (num > largest) {
                        largest = num;
                    }
                }

                cout << "The largest number is " << largest << endl;
            }
        } else if (user_operation == 'q') {
            cout << "Goodbye" << endl;
        } else {
            cout << "Unknown selection, please try again" << endl;
        }

        cout << endl;
    } while (user_operation != 'q');

    return 0;
}
