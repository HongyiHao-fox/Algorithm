#include <iostream>
#include <string>

int main() {
    int alphabet[26] = {0};
    std::string input;
    std::cin >> input;

    for (char c : input) {
        ++alphabet[c - 'a'];
    }

    int max_count = 0;
    int min_count = static_cast<int>(input.size());
    for (int count : alphabet) {
        if (count == 0) {
            continue;
        }
        if (count > max_count) {
            max_count = count;
        }
        if (count < min_count) {
            min_count = count;
        }
    }

    const int difference = max_count - min_count;
    bool is_prime = difference >= 2;
    for (int divisor = 2; divisor * divisor <= difference; ++divisor) {
        if (difference % divisor == 0) {
            is_prime = false;
            break;
        }
    }

    if (is_prime) {
        std::cout << "Lucky Word\n" << difference << '\n';
    } else {
        std::cout << "No Answer\n0\n";
    }
}