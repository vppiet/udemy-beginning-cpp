#include <iostream>

using namespace std;

int main() {
    cout << "Hello, welcome to Frank's Carpet Cleaning Service!" << endl;

    int small_rooms {0};
    cout << "How many small rooms would you like cleaned? ";
    cin >> small_rooms;

    int large_rooms {0};
    cout << "How many large rooms would you like cleaned? ";
    cin >> large_rooms;

    const double charge_small_room {25.0};
    const double charge_large_room {35.0};
    const double tax_rate {0.06};
    const int expiry_days {30};

    const double cost_amount {small_rooms  * charge_small_room + large_rooms * charge_large_room};
    const double tax_amount {cost_amount * tax_rate};

    cout << endl;
    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << small_rooms << endl;
    cout << "Number of large rooms: " << large_rooms << endl;
    cout << "Price per small room: $" << charge_small_room << endl;
    cout << "Price per large room: $" << charge_large_room << endl;
    cout << "Cost: $" << cost_amount << endl;
    cout << "Tax: $" << tax_amount << endl;

    cout << "===================================" << endl;
    cout << "Total estimate: $" << cost_amount + tax_amount << endl;
    cout << "This estimate is valid for " << expiry_days << " days." << endl;

    return 0;
}
