#include <stdio.h>



/*

З клавіатури вводиться послідовність чисел. Знайти суму тих із них, які кратні
заданому числу (це число також вводить користувач):
• Кількість чисел заздалегідь відома
• Кількість чисел наперед невідома – число 0 – ознака кінця введення.
Реалізувати задачу за допомогою трьох видів циклу: for, while, do while.

*/

int main(void) {
    int n, divisor, num, sum = 0;

    printf("Enter the number of numbers: "); // введення кількості чисел
    scanf("%d", &n);

    printf("Enter the divisor: "); // дільник 
    scanf("%d", &divisor);

    if (divisor > 0) {
        for (int i = 0; i < n; i++) { // цикл для введення n чисел
            printf("Enter a number: ");
            scanf("%d", &num);

            if (num % divisor == 0) { // перевірка на кратність
                sum += num;
            }
        }
    } else {
        printf("All is 0, because the divisor is 0\n");
    }

    printf("Sum of numbers divisible by %d: %d\n", divisor, sum);

    return 0;
}


int main2(void) {
    int divisor, num, sum = 0;

    printf("Enter the divisor: "); // дільник 
    scanf("%d", &divisor);

    if (divisor > 0) {
        for (;;) { // нескінченний цикл
            printf("Enter a number (0 to stop): ");
            scanf("%d", &num);

            if (num == 0) {
                break; // Перериваємо цикл, якщо введено 0
            }

            if (num % divisor == 0) { // перевірка на кратність 
                sum += num;
            }
        }
    } else {
        printf("All is 0, because the divisor is 0");
    }

    printf("Sum of numbers divisible by %d: %d\n", divisor, sum);

    return 0;
}
