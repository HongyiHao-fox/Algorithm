#include <iostream>

int main() {
    int num_apples;
    std::cin >> num_apples;

    if (num_apples <= 1) {
        std::cout << "Today, I ate " << num_apples << " apple." << std::endl;
    } else {
        std::cout << "Today, I ate " << num_apples << " apples." << std::endl;
    }

    return 0;
}