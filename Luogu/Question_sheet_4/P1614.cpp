#include <iostream>
#include <vector>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int window = 0;
    for (int i = 0; i < m; i++) {
        window += arr[i];
    }

    int best = window;
    for (int i = m; i < n; i++) {
        window += arr[i] - arr[i - m];
        if (window < best) {
            best = window;
        }
    }

    std::cout << best << std::endl;
    return 0;
}