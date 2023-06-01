#include <stdio.h>

int fibonacci(int n) { // функция для вычисления n-го числа Фибоначчи
    if (n <= 0) {
        return -1;  // обработка некорректного ввода
    } else if (n == 1 || n == 2) {
        return n - 1;  // если F= 0, F=1, то возвращаем соответствующее значение
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // рекурсивный вызов функции: сложенре 2-х предыдущих чисел
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int result = fibonacci(n);  // вычисление n-го числа Фибоначчи
    if (result == -1) {
        printf("\n");
    } else {
        printf("%d: %d\n", n, result);
    }
    return 0;
}



