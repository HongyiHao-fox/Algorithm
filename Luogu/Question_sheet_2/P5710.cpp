#include <bits/stdc++.h>

int P1 = 0, P2 = 0, P3 = 0, P4 = 0, number;
int main() {
    scanf("%d", &number);
    if (number % 2 == 0 && number > 4 && number <= 12) {
        P1 = 1;
    }
    if (number % 2 == 0 || number > 4 && number <= 12 ||
        number % 2 == 0 && number > 4 && number <= 12) {
        P2 = 1;
    }
    if (number % 2 == 0 && number <= 4 && number > 12 ||
        number > 4 && number <= 12 && number % 2 == 1) {
        P3 = 1;
    }
    if (number % 2 == 1 && number <= 4 || number % 2 == 1 && number > 12) {
        P4 = 1;
    }
    printf("%d %d %d %d\n", P1, P2, P3, P4);
    return 0;
}