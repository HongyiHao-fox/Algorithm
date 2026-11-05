#include <iostream>

int main() {
    int n, m, k;
    int pos_torch_x[26], pos_torch_y[26], pos_fluorite_x[6], pos_fluorite_y[6];
    bool space[100][100] = {};
    std::cin >> n >> m >> k;

    for (int i = 0; i < m; i++) {
        std::cin >> pos_torch_x[i] >> pos_torch_y[i];
        --pos_torch_x[i];
        --pos_torch_y[i];
    }

    for (int i = 0; i < k; i++) {
        std::cin >> pos_fluorite_x[i] >> pos_fluorite_y[i];
        --pos_fluorite_x[i];
        --pos_fluorite_y[i];
    }

    for (int i = 0; i < m; i++) {
        for (int dx = -2; dx <= 2; dx++) {
            for (int dy = -2; dy <= 2; dy++) {
                bool isLit = (dx >= -1 && dx <= 1 && dy >= -1 && dy <= 1) ||
                             (dx == 0 && (dy == -2 || dy == 2)) ||
                             (dy == 0 && (dx == -2 || dx == 2));
                int x = pos_torch_x[i] + dx;
                int y = pos_torch_y[i] + dy;
                if (isLit && x >= 0 && x < n && y >= 0 && y < n) {
                    space[x][y] = true;
                }
            }
        }
    }

    for (int i = 0; i < k; i++) {
        for (int dx = -2; dx <= 2; dx++) {
            for (int dy = -2; dy <= 2; dy++) {
                int x = pos_fluorite_x[i] + dx;
                int y = pos_fluorite_y[i] + dy;
                if (x >= 0 && x < n && y >= 0 && y < n) {
                    space[x][y] = true;
                }
            }
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!space[i][j]) {
                count++;
            }
        }
    }

    std::cout << count << '\n';
    return 0;
}
