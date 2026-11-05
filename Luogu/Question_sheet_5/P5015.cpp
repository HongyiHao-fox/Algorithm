#include <iostream>
#include <string>

int main() {
    std::string title;
    std::getline(std::cin, title);

    int count = 0;
    for (char ch : title) {
        if (ch != ' ') {
            ++count;
        }
    }

    std::cout << count << '\n';
    return 0;
}