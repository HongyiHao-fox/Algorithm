#include <iostream>
#include <string>

int main() {
    std::string str ;
    std::getline(std::cin,str);
    for(int i = 0 ; i < str.size() ; i ++ ) {
        if(str[i] == ' ') {
                std::cout << ' ';
                while(str[i+1] == ' ') {
                    i++;
                }
            }
        else std::cout << str[i];
    }
    return 0;
}

