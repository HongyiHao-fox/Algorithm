#include <iostream>
#include <string>

int main() {
    int count;
    std::cin >> count;

    char operation = '\0';
    for (int i = 0; i < count; ++i) {
        std::string first;
        int left, right;
        std::cin >> first;

        if (first == "a" || first == "b" || first == "c") {
            operation = first[0];
            std::cin >> left >> right;
        } else {
            left = std::stoi(first);
            std::cin >> right;
        }

        char symbol;
        int result;
        if (operation == 'a') {
            symbol = '+';
            result = left + right;
        } else if (operation == 'b') {
            symbol = '-';
            result = left - right;
        } else {
            symbol = '*';
            result = left * right;
        }

        const std::string equation =
            std::to_string(left) + symbol + std::to_string(right) + "=" +
            std::to_string(result);
        std::cout << equation << '\n' << equation.size() << '\n';
    }

    return 0;
}