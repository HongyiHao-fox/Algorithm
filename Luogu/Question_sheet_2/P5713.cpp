#include <iostream>

int main() {
    int a, t1, t2;
    std::cin >> a;
    t1 = 5 * a;
    t2 = 3 * a + 11;
    if (t1 <= t2) {
        std::cout << "Local" << std::endl;
    } else if (t2 <= t1) {
        std::cout << "Luogu" << std::endl;
    }
    return 0;
}