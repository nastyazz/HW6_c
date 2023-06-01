#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int next = a + (c - a % d) % d;  // вычисление значения, на которое нужно увеличить a, чтобы оно удовлетворяло условию остатка c при делении на d.
    for (int i = next; i <= b; i += d) {  // вывод числе от next до b с шагом  d
        printf("%d ", i);
    }
    return 0;
}
