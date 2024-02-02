#include <iostream>
#include <cstring>

int main() {
    int luku;
    int *osoitin;
    osoitin = &luku;

    char mj[]{"Bjarne"};
    std::cout << mj << std::endl;
    std::cout << sizeof(mj) << std::endl;

    std::cout << "Exiting...\n";
}
