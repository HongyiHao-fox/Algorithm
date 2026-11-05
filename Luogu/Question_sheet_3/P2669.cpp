#include <iostream>

int main() {
    int total_day;
    std::cin >> total_day;

    int coin_num = 1;
    int stage = 1;

    while (total_day > 0) {
        if (total_day >= stage) {
            total_day -= stage;
            coin_num += stage;
            stage++;
        } else {
            coin_num += total_day;
            total_day = 0;
        }
    }

    std::cout << coin_num << std::endl;
}