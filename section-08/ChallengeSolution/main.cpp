#include <iostream>

using namespace std;

int main() {
    int cents {0};

    cout << "Enter an amount in cents: ";
    cin >> cents;

    const int two_euro_coins = cents / 200;
    cents %= 200;

    const int one_euro_coins = cents / 100;
    cents %= 100;

    const int fifty_cents_coins = cents / 50;
    cents %= 50;

    const int twenty_cents_coins = cents / 20;
    cents %= 20;

    const int ten_cents_coins = cents / 10;
    cents %= 10;

    const int one_cent_coins = cents;

    cout << "\nYou can provide change for this change as follows:" << endl;
    cout << "2 euro coins: " <<   two_euro_coins << endl;
    cout << "1 euro coins: " <<   one_euro_coins << endl;
    cout << "50 cents coins: " << fifty_cents_coins << endl;
    cout << "20 cents coins: " << twenty_cents_coins << endl;
    cout << "10 cents coins: " << ten_cents_coins << endl;
    cout << "1 cent coins: " << one_cent_coins << endl;

    return 0;
}
