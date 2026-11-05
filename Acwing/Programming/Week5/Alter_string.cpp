#include <iostream>
#include <string>

int main() {
    std::string str;
    char altered_char;
    getline(std::cin, str);
    std::cin >> altered_char;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == altered_char) {
            std::cout << '#';
        } else {
            std::cout << str[i];
        }
    }
    return 0;
}