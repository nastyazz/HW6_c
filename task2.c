#include <stdio.h>
#include <string.h>

char* join(char* words[], int n) {  // массив символов для хранения объединенной строки
    char res[256] = ""; // инициализированние пустой строкой
    int length = 0; // переменная для отслеживания текущей длины строки
    for (int i = 0; i < n; i++) { // объединение строк
        char* word = words[i];  // текующа строка
        int wordLength = strlen(word); // длина текущей строки
        if (length + wordLength + 1 <= 255) { // не привыщает ли текующая строка макс длину
            if (i > 0) { // если не первая строка: добавляем пробел
                strcat(res, " ");
                length++;
            }
            strcat(res, word);// добавление текующей строки к результату
            length += wordLength; // увелечение длины на длину текущей строки
        } else {
            break;  //  tсли добавление текущей строки превысит максимальную длину, прекращаем добавление строк
        }
    }
    return strdup(res);
}
int main() {
    char* words[] = {"привет", "save", "dog", "cat", "lakdfd", "au"};
    int numWords = sizeof(words) / sizeof(words[0]);
    char* result = join(words, numWords);
    printf("%s\n", result);
    free(result); // освобожжение памяти, которая выделенна для результата
    return 0;
}
