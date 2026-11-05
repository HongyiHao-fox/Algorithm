#include <iostream>

int main() {
    long long Total_Num, Number1, Number2, Number3, Price1, Price2, Price3;
    std::cin >> Total_Num;

    std::cin >> Number1 >> Price1 >> Number2 >> Price2 >> Number3 >> Price3;

    long long Total_Num1 = (Total_Num + Number1 - 1) / Number1;
    long long Total_Num2 = (Total_Num + Number2 - 1) / Number2;
    long long Total_Num3 = (Total_Num + Number3 - 1) / Number3;

    long long Total_Price1 = Total_Num1 * Price1;
    long long Total_Price2 = Total_Num2 * Price2;
    long long Total_Price3 = Total_Num3 * Price3;

    long long Min_Price = Total_Price1;
    if (Total_Price2 < Min_Price) {
        Min_Price = Total_Price2;
    }
    if (Total_Price3 < Min_Price) {
        Min_Price = Total_Price3;
    }

    std::cout << Min_Price << std::endl;
    return 0;
}