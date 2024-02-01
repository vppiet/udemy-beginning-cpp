#include <iostream>

using namespace std;

int main() {
    enum Direction {
        LEFT, RIGHT, UP, DOWN
    };

    Direction heading{LEFT};

    switch (heading) {
        case LEFT:
            cout << "Going left" << endl;
            break;
        case RIGHT:
            cout << "Going right" << endl;
            break;
        default:
            cout << "OK!" << endl;
            break;
    }

    return 0;
}
