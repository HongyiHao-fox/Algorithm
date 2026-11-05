#include <iostream>
#include <string>

int main() {
    int q;
    std::cin >> q;
    std::string str;
    std::cin >> str;

    for (int i = 0; i < q; ++i) {
        int operation;
        std::cin >> operation;

        if (operation == 1) {
            std::string suffix;
            std::cin >> suffix;
            str += suffix;
            std::cout << str << '\n';
        } else if (operation == 2) {
            int start, length;
            std::cin >> start >> length;
            str = str.substr(start, length);
            std::cout << str << '\n';
        } else if (operation == 3) {
            int position;
            std::string inserted;
            std::cin >> position >> inserted;
            str.insert(position, inserted);
            std::cout << str << '\n';
        } else if (operation == 4) {
            std::string target;
            std::cin >> target;
            const std::size_t position = str.find(target);
            if (position == std::string::npos) {
                std::cout << -1 << '\n';
            } else {
                std::cout << position << '\n';
            }
        }
    }

    return 0;
}