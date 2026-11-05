#include <iostream>

int lcm(int a, int b) {
    int result = a;
    while (result % b != 0) {
        result += a;
    }
    return result;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << lcm(a, b) << std::endl;
    return 0;
}