#include <iostream>

int main() {
    int n, num = 1;
    std::cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if (num < 10){
                std::cout << "0" << num;
            } else {
                std::cout << num;
            }
            num++;
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
    num = 1;

    for (int i = 0; i < n; i++) {
        for (int k = 0; k < 2 * (n - 1 - i); k++) {
            std::cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            if (num < 10){
                std::cout << "0" << num;
            } else {
                std::cout << num;
            }
            num++;
        }
        std::cout << std::endl;
    }
    return 0;
}