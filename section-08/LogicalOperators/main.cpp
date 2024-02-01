#include <iostream>

using namespace std;

int main() {
    cout << boolalpha;

    // int num {};
    // const int lower {10};
    // const int upper {20};

    // cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": ";
    // cin >> num;

    // bool within_bounds {false};
    // within_bounds = (num > lower && num < upper);
    // cout << num << " is between " << lower << " and " << upper << ": " << within_bounds << endl;

    // bool outside_bounds {false};
    // outside_bounds = (num < lower || num > upper);
    // cout << num << " is outside " << lower << " and " << upper << ": " << outside_bounds << endl;

    // bool on_bounds {false};
    // on_bounds = num == lower || num == upper;
    // cout << num << " is on one of the bounds which are " << lower << " and " << upper << ": " << on_bounds << endl;

    bool wear_coat {false};
    double temperature {};
    int wind_speed {};

    const double temperature_for_coat {15};
    const int wind_speed_for_coat {7};

    cout << "\nEnter the current temperature in (C):";
    cin >> temperature;
    cout << "Enter windspeed in (m/s): ";
    cin >> wind_speed;

    wear_coat = temperature < temperature_for_coat || wind_speed > wind_speed_for_coat;
    cout << "Do you need to wear a coat using OR? " << wear_coat << endl;

    wear_coat = temperature < temperature_for_coat && wind_speed > wind_speed_for_coat;
    cout << "Do you need to wear a coat using AND? " << wear_coat << endl;

    return 0;
}
