#include <iostream>

void quick_sort(int arr[], int left, int right);

int main() {
    int Num1, Num2, Num3, n = 3;

    std::cin >> Num1 >> Num2 >> Num3;

    int arr[] = {Num1, Num2, Num3};
    quick_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}

void quick_sort(int arr[], int left, int right) {
    if (left >= right) {
        return;
    }

    int i = left - 1, j = right + 1;
    int pivot = arr[(left + right) / 2];
    while (i < j) {
        do {
            i++;
        } while (arr[i] < pivot);
        do {
            j--;
        } while (arr[j] > pivot);
        if (i < j) {
            std::swap(arr[i], arr[j]);
        }
    }
    quick_sort(arr, left, j);
    quick_sort(arr, j + 1, right);
}