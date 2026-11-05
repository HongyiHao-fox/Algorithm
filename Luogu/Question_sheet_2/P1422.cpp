#include <cmath>
#include <iostream>
int main() {
    double s;
    int n;
    std::cin >> n;
    if (n > 400) {
        s = 150 * 0.4463 + 250 * 0.4663 + (n - 400) * 0.5663;
    } else if (n > 150) {
        s = 150 * 0.4463 + (n - 150) * 0.4663;
    } else {
        s = n * 0.4463;
    }

    std::cout << std::floor(s * 10 + 0.5) / 10.0;
    return 0;
}