#include <iostream>

int main() {
    int x, n, d, s;
    std::cin >> x >> n;
    for (int i = 0; i < n; i++) {

        if ((x != 6) && (x != 7)) {
            s = s + 250;
        }

        if (x == 7) {
            x = 1;
        } else {
            x++;
        }
    }
    std::cout << s << std::endl;
    return 0;
}