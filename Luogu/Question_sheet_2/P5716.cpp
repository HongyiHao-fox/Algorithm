#include <stdio.h>
int main() {
    int year, month;
    scanf("%d %d", &year, &month);
    int day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        day[2] = 29;
    }
    printf("%d", day[month]);
    return 0;
}