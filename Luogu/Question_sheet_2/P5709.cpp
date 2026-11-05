#include <iostream>

int m, t, s;
int main() {
    std::cin >> m >> t >> s;
    if (t == 0) {
        std::cout << 0 << std::endl;
        return 0;
    }
    if (s % t == 0) {
        std::cout << std::max(m - s / t, 0) << std::endl;
    } else {
        std::cout << std::max(m - s / t - 1, 0) << std::endl;
    }
    return 0;
}