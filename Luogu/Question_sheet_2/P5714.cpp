#include <iostream>

double m, h, q;
int main() {
    std::cin >> m >> h;
    q = 1.0 * m / (1.0 * h * h);
    if (q < 18.5) {
        std::printf("Underweight\n");
    } else if (q < 24) {
        std::printf("Normal\n");
    } else {
        std::cout << q << std::endl << "Overweight" << std::endl;
    }
    return 0;
}