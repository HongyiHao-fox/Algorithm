#include <iostream>

int main() {
    int Hour_school, Hour_after, Total_time, max = 0, i, day = 0;
    for (i = 1; i < 8; i++) {
        std::cin >> Hour_school >> Hour_after;
        Total_time = Hour_school + Hour_after;
        if ((Total_time > max) && (Total_time > 8)) {
            max = Total_time, day = i;
        }
    }
    std::cout << day;
    return 0;
}