#include <iostream>

int main() {
    int w, x, h;
    std::cin >> w >> x >> h;

    int q;
    std::cin >> q;

    bool quarter[21][21][21] = {false};

    int x1, x2, y1, y2, z1, z2;

    for (int t = 0; t < q; t++) {
        std::cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        for (int i = x1; i <= x2; i++) {
            for (int j = y1; j <= y2; j++) {
                for (int k = z1; k <= z2; k++) {
                    quarter[i][j][k] = true;
                }
            }
        }
    }

    int count = 0;
    for (int i = 1; i <= w; i++) {
        for (int j = 1; j <= x; j++) {
            for (int k = 1; k <= h; k++) {
                if (!quarter[i][j][k]) {
                    count++;
                }
            }
        }
    }
    std::cout << count << std::endl;
    return 0;
}