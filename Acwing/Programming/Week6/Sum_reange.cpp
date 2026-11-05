#include <iostream>

int sum(int l, int r) {
    int result = 0;
    for (int i = l; i <= r; i++) {
        result += i;
    }
    return result;
}

int main() {
    int l, r;
    std::cin >> l >> r;
    std::cout << sum(l, r) << std::endl;
    return 0;
}