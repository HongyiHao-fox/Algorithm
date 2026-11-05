#include <iostream>

int abs(int x) {
    return x < 0 ? -x : x;
}

int main() {
    int x;
    std::cin >> x;
    std::cout << abs(x) << std::endl;
    return 0;
}