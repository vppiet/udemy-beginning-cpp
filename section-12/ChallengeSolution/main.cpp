#include <iostream>

using namespace std;

int *apply_all(const int *const arr1, const size_t size1, const int *const arr2, const size_t size2) {
    int *new_arr = new int[size1 * size2];

    int pos{0};
    for (size_t i{0}; i < size2; ++i) {
        for (size_t j{0}; j < size1; ++j) {
            new_arr[pos] = arr1[j] * arr2[i];
            ++pos;
        }
    }

    return new_arr;
}

void print(const int *const arr, const size_t size) {
    for (size_t i{0}; i < size; ++i) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {
    constexpr int array1[]{1, 2, 3, 4, 5};
    constexpr size_t array1_size = 5;

    constexpr int array2[]{10, 20, 30};
    constexpr size_t array2_size = 3;

    cout << "Array 1: ";
    print(array1, array1_size);

    cout << "Array 2: ";
    print(array2, array2_size);

    const int *results = apply_all(array1, 5, array2, 3);
    constexpr size_t results_size {array1_size * array2_size};

    cout << "Result: ";
    print(results, results_size);

    delete results;

    return 0;
}
