#include <cmath>
#include <cstdio>
#include <iostream>

int main() {
    int T;
    std::cin >> T;
    if (T == 1) {
        std::cout << "I love Luogu!";
    } else if (T == 2) {
        std::cout << 2 + 4 << " " << 10 - 2 - 4;
    } else if (T == 3) {
        std::cout << 3 << std::endl << 12 << std::endl << 2 << std::endl;
    } else if (T == 4) {
        printf("%.3lf\n", 500.0 / 3.0);
    } else if (T == 5) {
        std::cout << 15 << std::endl;
    } else if (T == 6) {
        std::cout << sqrt(6 * 6 + 9 * 9) << std::endl;
    } else if (T == 7) {
        std::cout << 110 << std::endl << 90 << std::endl << 0 << std::endl;
    } else if (T == 8) {
        double const pi = 3.141593;
        double const r = 5;
        std::cout << pi * r * 2 << std::endl
                  << pi * r * r << std::endl
                  << 4.0 / 3 * pi * r * r * r << std::endl;
    } else if (T == 9) {
        std::cout << 22 << std::endl;
    } else if (T == 10) {
        std::cout << 9 << std::endl;
    } else if (T == 11) {
        std::cout << 100.0 / (8 - 5) << std::endl;
    } else if (T == 12) {
        std::cout << 13 << std::endl << "R" << std::endl;
    } else if (T == 13) {
        double const pi = 3.141593;
        double V = pi * 4 * 4 * 4 * 4 / 3 + pi * 10 * 10 * 10 * 4 / 3;
        std::cout << floor(pow(V, 1.0 / 3)) << std::endl;
    } else if (T == 14) {
        std::cout << 50 << std::endl;
    }
    return 0;
}
