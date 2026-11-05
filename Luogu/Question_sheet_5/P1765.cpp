#include <iostream>
#include <string>
#include <vector>

const std::vector<std::string> groups = {
    "abc", "def", "ghi", "jkl",
    "mno", "pqrs", "tuv", "wxyz"
};

int main() {
    std::string text;
    std::getline(std::cin, text);

    int count = 0;
    for (char c : text) {
        if (c == ' ') {
            ++count;
            continue;
        }

        for (std::size_t i = 0; i < groups.size(); ++i) {
            const std::size_t position = groups[i].find(c);
            if (position != std::string::npos) {
                count += static_cast<int>(position) + 1;
                break;
            }
        }
    }

    std::cout << count << '\n';
    return 0;
}
