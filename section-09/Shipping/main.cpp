#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int length{}, width{}, height{};
    double base_cost{2.50};

    const int tier1_threshold{100}; // volume
    const int tier2_threshold{500}; // volume

    const int max_dimension_length{10}; // inches

    const double tier1_surcharge{0.10}; // 10% extra
    const double tier2_surcharge{0.25}; // 25% extra

    cout << "Welcome to the package cost calculator" << endl;
    cout << "Enter length, width, and height of the package separated by spaces: ";
    cin >> length >> width >> height;

    if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length) {
        cout << "Sorry, package rejected: dimension exceeded" << endl;
    } else {
        double package_cost{base_cost};
        const int package_volume{length * width * height};

        if (package_volume > tier2_threshold) {
            package_cost += package_cost * tier2_surcharge;
            cout << " Adding tier 2 surcharge" << endl;
        } else if (package_volume > tier1_threshold) {
            package_cost += package_cost * tier1_surcharge;
            cout << " Adding tier 1 surcharge" << endl;
        }

        cout << fixed << setprecision(2);
        cout << "The volume of your package is: " << package_volume << endl;
        cout << "Your package will cost $" << package_cost << endl;
    }

    return 0;
}
