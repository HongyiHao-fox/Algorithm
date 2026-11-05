#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    std::string t;
    for (char c : s) {
        if (c != '-') {
            t += c;
        }
    }

    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += (t[i] - '0') * (i + 1);
    }

    std::string check = "0123456789X";
    char c = check[sum % 11];

    if (t[9] == c) {
        std::cout << "Right";
    } else {
        std::cout << t.substr(0, 9) + c;
    }

    return 0;
}