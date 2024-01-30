#include <iostream>

using namespace std;

int main() {

    cout << "Enter the width of the room: ";
    cin >> room_width;
    int room_width {0};

    cout << "Enter the length of the room: ";
    cin >> room_length;
    int room_length {0};

    cout << "The area of the room is " << room_width * room_length << " square meters" << endl;

    return 0;
}
