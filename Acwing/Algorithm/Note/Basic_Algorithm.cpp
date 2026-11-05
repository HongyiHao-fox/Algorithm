#include <iostream>

const int N = 1e6 + 10;

int n, arr[N], temp[N];
void quick_sort(int arr[], int left, int right);
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    quick_sort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void quick_sort(int arr[], int left, int right) {
    if (left >= right) {
        return;
    }

    int index = arr[left], i = left - 1, j = right + 1;
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
    quick_sort(arr, left, j);
    quick_sort(arr, j + 1, right);
}

void merge_sort(int arr[], int left, int right) {

    if (left >= right) {
        return;
    }

    int mid = (left + right) >> 1;

    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);

    int k = 0, left_index = left, right_index = mid + 1;
    while (left_index <= mid && right_index <= right) {
        if (arr[left_index] <= arr[right_index]) {
            temp[k++] = arr[left_index++];
        } else {
            temp[k++] = arr[right_index++];
        }
    }
    while (left_index <= mid) {
        temp[k++] = arr[left_index++];
    }
    while (right_index <= right) {
        temp[k++] = arr[right_index++];
    }
    for ()
}