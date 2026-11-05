#include <iostream>
void quick_sort(int arr[], int left, int right);
int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    quick_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void quick_sort(int arr[], int left, int right) {
    if (left >= right) return;

    int i = left - 1 , j = right + 1, x = arr[(left + right) / 2];

    while (i < j) {
        do i++; while (arr[i] < x);
        do j--; while (arr[j] > x);
        if (i < j) std::swap(arr[i], arr[j]);
    }
    quick_sort(arr, left, j);
    quick_sort(arr, j + 1, right);
}