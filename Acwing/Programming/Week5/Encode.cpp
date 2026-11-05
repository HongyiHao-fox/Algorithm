#include <iostream>
#include <string>

int main() {
    std::string str;
    getline(std::cin, str);
    for (int i = 0; i < str.size(); i++) {
        std::cout << (char)(str[i] + 1);
    }
    std::cout << std::endl;
    return 0;
}