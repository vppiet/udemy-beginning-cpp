#include <iostream>

using namespace std;

int main() {
    int num{100};
    int num1{500};

    cout << "Local num is: " << num << " in main" << endl;

    {
        int num{200};
        cout << "Local num is: " << num << " in inner block in main" << endl;
        cout << "Inner block in main can see out - num1 is: " << num1 << endl;
    }

    cout << "Local num is: " << num << " in main" << endl;

    return 0;
}
