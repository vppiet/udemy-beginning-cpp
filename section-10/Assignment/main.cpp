#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string user_input{};

    cout << "Enter a string for the letter pyramid: ";
    cin >> user_input;

    for (size_t i{0}; i < user_input.length(); ++i) {
        // trunk
        string row{user_input[i]};

        if (i != 0) {
            // left leaves
            const string left{user_input.substr(0, i)};
            row.insert(0, left);

            // right leaves
            string right{left};
            reverse(right.begin(), right.end());
            row.append(right);
        }

        // padding
        const size_t l_pad_amount{user_input.length() - 1 - i};
        const string l_pad(l_pad_amount, ' ');
        row.insert(0, l_pad);

        cout << row << endl;
    }

    return 0;
}

/*
str = abc

  a
 aba
abcba

  0
 010
01210
 */
