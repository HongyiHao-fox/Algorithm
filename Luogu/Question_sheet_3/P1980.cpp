#include <iostream>

int main() {
    int n, x, times = 0;
    std::cin >> n >> x;

    for (int i = 1; i <= n; i++) {
        int temp = i;

        while (temp > 0) {
            if (temp % 10 == x) {
                times++;
            }
            temp /= 10;
        }
    }

    std::cout << times << std::endl;

    return 0;
}