#include <iostream>
#include <string>

std::string reverse_string(const std::string &str) {
    std::string reversed;
    const char* start = str.c_str();
    const char* end = str.c_str() + str.size() - 1;

    while (end >= start) {
        reversed.push_back(*end);
        end--;
    }

    return reversed;
}

int main() {
    std::string input = "Hello, World!";
    std::string reversed = reverse_string(input);
    std::cout << reversed << std::endl;

    return 0;
}
