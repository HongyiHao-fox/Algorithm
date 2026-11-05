#include <iostream>

const int N = 100;
void print2D(int a[][N], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            std::cout << a[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

int main() {
    int columns, rows;
    std::cin >> rows >> columns;
    int a[N][N];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cin >> a[i][j];
        }
    }
    print2D(a, rows, columns);
    return 0;
}