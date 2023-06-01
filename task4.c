#include <stdio.h>

int sumDigits(int *num) {
    int number = *num; // значение числа из указателя
    int sum = 0;
    while (number != 0) { // сумма цифр числа
        int d = number % 10; // последняя цифра числа
        sum += d; // добавление цифры к сумме
        number /= 10;
    }
    return sum;
}

int main() {
    int number;
    scanf("%d", &number);
    int sum = sumDigits(&number);
    printf("%d\n", sum);
    return 0;
}
