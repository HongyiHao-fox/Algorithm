#include <iostream>

void print(char str[]) {
    for (int i = 0; str[i]; i++) {
        std::cout << str[i];
    }
}

int main() {
    std::string str;
    getline(std::cin, str);
    print(&str[0]);
}