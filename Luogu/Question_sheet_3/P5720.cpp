#include <iostream>

int main() {
    int a;
    std::cin >> a;

    int days = 0;
    while (a > 1) {
        a /= 2;
        days++;
    }

    std::cout << days + 1 << std::endl;
    return 0;
}