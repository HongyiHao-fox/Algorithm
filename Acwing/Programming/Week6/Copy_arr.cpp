#include <iostream>

void copy(int a[], int b[], int size) {
    for (int i = 0; i < size; i++) {
        b[i] = a[i];
    }

}

int main() {
    int n, m ,size;
    std::cin >> n >> m >> size;
    int a[n], b[m];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        std::cin >> b[i];
    }
    copy(a, b, size);
    for (int i = 0; i < m; i++) {
        std::cout << b[i] << ' ';
    }
    std::cout << std::endl;
}