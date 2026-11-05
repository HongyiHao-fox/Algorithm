#include <iostream>
#include <string>

int main() {
    std::string str1, str2;

    getline(std::cin, str1);

    str2 = str1;
    for (int i = 0; i < str1.size(); i++) {
        str2[i] = str1[i] + str1[(i+1) % str1.size()];
    }
    std::cout << str2 << std::endl;

    return 0;
}