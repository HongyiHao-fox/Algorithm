#include <iostream>

double add(double x, double y) {
    return x + y;
}

int main() {
    double num1, num2;
    std::cin >> num1 >> num2;

    std::cout << add(num1, num2) << std::endl;
    return 0;
}