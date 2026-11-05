#include <iomanip>
#include <iostream>

int main() {
    int N;
    int arr[10][10];
    std::cin >> N;
    int count = 1;
    int top = 0, bottom = N - 1, left = 0, right = N - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            arr[top][i] = count++;
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            arr[i][right] = count++;
        }
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                arr[bottom][i] = count++;
            }
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                arr[i][left] = count++;
            }
            left++;
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << std::setw(3) << arr[i][j];
        }
        std::cout << std::endl;
    }
    return 0;
}