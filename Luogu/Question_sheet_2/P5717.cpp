#include <algorithm>
#include <iostream>

int main() {
    long long a, b, c;
    std::cin >> a >> b >> c;

    long long sides[3] = {a, b, c};
    std::sort(sides, sides + 3);

    long long x = sides[0], y = sides[1], z = sides[2];

    if (x + y <= z) {
        std::cout << "Not triangle" << std::endl;
        return 0;
    }

    long long left = x * x + y * y;
    long long right = z * z;

    if (left == right) {
        std::cout << "Right triangle" << std::endl;
    } else if (left > right) {
        std::cout << "Acute triangle" << std::endl;
    } else {
        std::cout << "Obtuse triangle" << std::endl;
    }

    if (x == y || y == z || x == z) {
        std::cout << "Isosceles triangle" << std::endl;
    }

    if (x == y && y == z) {
        std::cout << "Equilateral triangle" << std::endl;
    }

    return 0;
}
