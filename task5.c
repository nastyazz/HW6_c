#include <stdio.h>

int ispolnitel(int num) {
    // извлечение отдельных цифры из числа
    int d1 = num / 100;         // 1 цифра
    int d2 = (num / 10) % 10;   // 2 цифра
    int d3 = num % 10;          // 3 цифра
    int p1 = d1 * d2;   //  произведение цифр
    int p2 = d2 * d3;
    int res = p1 * 10 + p2;   // новое число из произведений в порядке убывания
    if (p2 > p1) {
        res = p2 * 10 + p1;
    }
    return res;
}

int main() {
    int number;
    scanf("%d", &number);
    int res = ispolnitel(number);
    printf("%d\n", res);
    return 0;
}
