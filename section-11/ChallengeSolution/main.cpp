#include <vector>
#include <iomanip>
#include <iostream>
#include <limits>

using namespace std;

void display_menu();

char read_operation();

void print_numbers(const vector<int> &numbers);

void add_number(vector<int> &numbers);

void display_mean(const vector<int> &numbers);

void display_smallest(const vector<int> &numbers);

void display_largest(const vector<int> &numbers);

void display_menu() {
    cout << endl;
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "Q - Quit" << endl;
    cout << endl;
    cout << "Enter your choice: ";
}

char read_operation() {
    char operation{};
    cin >> operation;
    return toupper(operation, locale());
}

void print_numbers(const vector<int> &numbers) {
    if (numbers.empty()) {
        cout << "\n[] - the list is empty";
    } else {
        cout << "\n[ ";
        for (const int num: numbers) {
            cout << num << " ";
        }

        cout << "]";
    }
}

void add_number(vector<int> &numbers) {
    int user_number{};

    cout << "Enter an integer to add to the list: ";
    cin >> user_number;
    numbers.push_back(user_number);

    cout << user_number << " added";
}

void display_mean(const vector<int> &numbers) {
    if (numbers.empty()) {
        cout << "Unable to calculate the mean - no data" << endl;
    } else {
        int sum{};

        for (const int num: numbers) {
            sum += num;
        }

        const double mean = static_cast<double>(sum) / numbers.size();
        cout << "Mean: " << mean << endl;
    }
}

void display_smallest(const vector<int> &numbers) {
    if (numbers.empty()) {
        cout << "Unable to determine the smallest number - list is empty" << endl;
    } else {
        int smallest{numbers.at(0)};

        for (const int num: numbers) {
            if (num < smallest) {
                smallest = num;
            }
        }

        cout << "The smallest number is " << smallest << endl;
    }
}

void display_largest(const vector<int> &numbers) {
    if (numbers.empty()) {
        cout << "Unable to determine the largest number - list is empty" << endl;
    } else {
        int largest{numbers.at(0)};

        for (const int num: numbers) {
            if (num > largest) {
                largest = num;
            }
        }

        cout << "The largest number is " << largest << endl;
    }
}

int main() {
    vector<int> numbers{};
    char user_operation{};

    cout << fixed << setprecision(2);

    do {
        display_menu();
        user_operation = read_operation();

        if (user_operation == 'P') {
            print_numbers(numbers);
        } else if (user_operation == 'A') {
            add_number(numbers);
        } else if (user_operation == 'M') {
            display_mean(numbers);
        } else if (user_operation == 'S') {
            display_smallest(numbers);
        } else if (user_operation == 'L') {
            display_largest(numbers);
        } else if (user_operation == 'Q') {
            cout << "Goodbye" << endl;
        } else {
            cout << "Unknown selection, please try again" << endl;
        }

        cout << endl;
    } while (user_operation != 'Q');

    return 0;
}
