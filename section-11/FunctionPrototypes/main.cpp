#include <iostream>
#include <cmath>

using namespace std;

// Function prototypes
double calc_volume_cylinder(double radius, double height);
double calc_area_circle(double radius);
void area_circle();
void volume_cylinder();

int main() {
    area_circle();
    volume_cylinder();

    return 0;
}

void area_circle() {
    double radius{};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;

    cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

double calc_area_circle(const double radius) {
    return M_PI * radius * radius;
}

double calc_volume_cylinder(const double radius, const double height) {
    return calc_area_circle(radius) * height;
}

void volume_cylinder() {
    double radius{};
    double height{};

    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;

    cout << "\nEnter the height of the cylinder: ";
    cin >> height;

    cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " <<
            calc_volume_cylinder(radius, height) << endl;
}
