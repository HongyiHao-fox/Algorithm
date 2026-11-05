#include <iostream>

void Quick_sort(int arr[], int left, int right);

int main() {
    int N = 1e6 + 10;
    int n, arr[N];
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    Quick_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

void Quick_sort(int arr[], int left, int right) {
    if (left >= right) {
        return;
    }

    int index = arr[(left + right) / 2], i = left - 1, j = right + 1;
    while (i < j) {
        do {
            i++;
        } while (arr[i] < index);
        do {
            j--;
        } while (arr[j] > index);
        if (i < j) {
            std::swap(arr[i], arr[j]);
        }
    }
    Quick_sort(arr, left, j);
    Quick_sort(arr, j + 1, right);
}