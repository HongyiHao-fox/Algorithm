#include <algorithm>
#include <iostream>
#include <numeric>

int main() {
    int arr[4];
    std::cin >> arr[1] >> arr[2] >> arr[3];
    std::sort(arr + 1, arr + 4);

    std::cout << arr[1] / std::gcd(arr[1], arr[2]) << "/" << arr[3] / std::gcd(arr[1], arr[2])
              << std::endl;

    return 0;
}