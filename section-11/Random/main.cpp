#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int random_number{};
    size_t count{10};
    const int min{1};
    const int max{6};

    cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
    srand(time(nullptr));

    for (size_t i{1}; i <= count; ++i) {
        random_number = rand() % (max - min + 1) + min;
        cout << random_number << endl;
    }

    return 0;
}
