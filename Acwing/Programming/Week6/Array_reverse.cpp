#include <iostream>

void reverse(int a[], int size) {
    for (int i = 0; i < size / 2; i ++ ) {
        int tmp = a[i];
        a[i] = a[size - i - 1];
        a[size - i - 1] = tmp;
    }
    
}

int main() {

    int n, size;
    std::cin >> n >> size;
    int a[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    reverse(a, size);
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << ' ';
    }
    std::cout << std::endl;

}