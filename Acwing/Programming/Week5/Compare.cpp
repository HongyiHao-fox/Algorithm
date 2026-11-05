#include <iostream>
#include <string>

int main() {
    std::string str1, str2;
    getline(std::cin, str1);
    getline(std::cin, str2);

    for (int i = 0, j = 0; i < str1.size() && j < str2.size(); i++, j++) {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            str1[i] = str1[i] - 'a' + 'A';
        }
        if (str2[j] >= 'a' && str2[j] <= 'z') {
            str2[j] = str2[j] - 'a' + 'A';
        }
        if (str1[i] != str2[j]) {
            std::cout << (str1[i] < str2[j] ? "<" : ">");
            return 0;
        }
    }
    if (str1.size() == str2.size()) {
        std::cout << "=";
    } else {
        std::cout << (str1.size() < str2.size() ? "<" : ">");
    }
    return 0;
}