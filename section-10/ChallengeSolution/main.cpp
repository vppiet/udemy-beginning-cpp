#include <iostream>
#include <string>

using namespace std;

int main() {
    const string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    const string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string user_secret{};
    cout << "Enter your secret message: ";
    getline(cin, user_secret);

    cout << "Encrypting message..." << endl;
    string encrypted{};
    for (size_t i{0}; i < user_secret.length(); ++i) {
        const size_t alpha_index{alphabet.find(user_secret[i])};

        if (alpha_index == string::npos) {
            encrypted += user_secret[i];
        } else {
            encrypted += key[alpha_index];
        }
    }

    cout << "Encrypted message: " << encrypted << endl;

    cout << "Decrypting message..." << endl;
    string decrypted{};
    for (size_t i{0}; i < encrypted.length(); ++i) {
        const size_t key_index{key.find(encrypted[i])};

        if (key_index == string::npos) {
            decrypted += encrypted[i];
        } else {
            decrypted += alphabet[key_index];
        }
    }

    cout << "Decrypted message: " << decrypted << endl;

    return 0;
}
