#include <iostream>

int max(int x, int y) {
    return x > y ? x : y;
}

int main() {
    int num1, num2;
    std::cin >> num1 >> num2;

    std::cout << max(num1, num2) << std::endl;
    return 0;
}