#include <iostream>

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n, size;
    std::cin >> n >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    print(arr, size);
    return 0;
}