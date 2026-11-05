#include <iostream>

int main() {
    int l, n;
    std::cin >> l >> n;
    bool removed[10005] = {false};

    int arr[n][2];
    for (int i = 0; i < n; ++i) {
        int begin, end;
        std::cin >> begin >> end;
        arr[i][0] = begin;
        arr[i][1] = end;
    }

    for (int i = 0; i <= l; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i >= arr[j][0] && i <= arr[j][1]) {
                removed[i] = true;
                break;
            }
        }
    }
    int count = 0;
    for (int i = 0; i <= l; ++i) {
        if (!removed[i]) {
            ++count;
        }
    }
    std::cout << count << std::endl;
}
