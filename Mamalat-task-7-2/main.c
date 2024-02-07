#include <stdio.h>
#include <stdlib.h>

float sum_before_negative(float array[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] < 0) {
            break;
        }
        sum += array[i];
    }
    return sum;
}
int main() {
    system("chcp 1251 & cls");
    float numbers[] = {8.2, 4.5, 2.1, 9.3, 6.7, 7.6, 1.4, 3.9, 5.6, -0.8,
3.2, -1.5, 6.9, -4.3, 2.7, -5.0, 8.1, -7.4, 0.6};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    float result = sum_before_negative(numbers, size);
    printf("Сума елементів до першого від'ємного елемента даного масиву: %.2f\n", result);
    return 0;
}
