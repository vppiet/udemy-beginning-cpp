#include <iostream>
#include <string>

using namespace std;

class Player {
private:
    string name{"Player"};
    int health;
    int xp;

public:
    void talk(const string &text_to_say) {
        cout << name << " says " << text_to_say << endl;
    }

    bool is_dead();
};

int main() {
    Player frank;

    frank.talk("Hello there");

    return 0;
}
