#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    // const int scores[]{10, 20, 30};
    // for (const auto score: scores) {
    //     cout << score << endl;
    // }

    // vector<double> temperatures{21.5, 18.2, 20.1, 19.25};
    // double average_temp{};
    // double total{};
    //
    // for (auto temp: temperatures) {
    //     total += temp;
    // }
    //
    // if (!temperatures.empty()) {
    //     average_temp = total / temperatures.size();
    // }
    //
    // cout << fixed << setprecision(1);
    // cout << "Average temperature is " << average_temp << endl;

    // for (const auto val: {1, 2, 3, 4}) {
    //     cout << val << endl;
    // }

    // for (const auto c: "This is a test") {
    //     if (c != ' ')
    //         cout << c;
    // }

    for (const auto c: "This is a test")
        if (c == ' ')
            cout << "\t";
        else
            cout << c;

    return 0;
}
