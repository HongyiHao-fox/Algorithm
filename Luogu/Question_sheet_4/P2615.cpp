#include <iostream>

int a[40][40];

int main() {
    int n;
    std::cin >> n;

    int r = 1, c = (n + 1) / 2;
    a[r][c] = 1;

    for (int k = 2; k <= n * n; k++) {
        if (r == 1 && c != n) {
            r = n;
            c++;
        } else if (c == n && r != 1) {
            r--;
            c = 1;
        } else if (r == 1 && c == n) {
            r++;
        } else if (a[r - 1][c + 1] == 0) {
            r--;
            c++;
        } else {
            r++;
        }
        a[r][c] = k;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j > 1) std::cout << " ";
            std::cout << a[i][j];
        }
        std::cout << std::endl;
    }
    return 0;
}
