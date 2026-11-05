#include <iostream>
#include <string>

int main() {
    float num;
    std::cin >> num;
    std::string str1, str2;
    std::cin >> str1 >> str2;

    float count = 0;
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] == str2[i]) {
            count++;
        }
    }
    if (count / str1.length() >= num) {
        std::cout << "yes" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }
}