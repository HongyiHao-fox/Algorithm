#include <iostream>

int get_unique_count(int a[], int size) {
    int count = sizeof(a);
    for (int i = 0; i < sizeof(a); i++) {
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j] && a[i] != -1) {
                count--;
                a[i] = -1;
            }
        }
    }
    return count;
}

int main() {
    int n;
    std::cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::cout << get_unique_count(a, n) << std::endl;
}