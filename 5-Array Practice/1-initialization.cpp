#include <iostream>
#include <array>
#include <algorithm>

int main() {
    std::array<int, 10> arr;
    int value = 5;

    std::fill(arr.begin(), arr.end(), value);

    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
