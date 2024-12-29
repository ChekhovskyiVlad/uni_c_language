#include <stdio.h>


/*

З клавіатури вводиться послідовність чисел. Знайти суму тих із них, які кратні
заданому числу (це число також вводить користувач):
• Кількість чисел заздалегідь відома
• Кількість чисел наперед невідома – число 0 – ознака кінця введення.
Реалізувати задачу за допомогою трьох видів циклу: for, while, do while.

*/


// кількість чисел відома заздалегіть

int main(void) {
    int n, divisor, num, sum = 0;

    printf("Enter the number of numbers: "); // введення кількості чисел
    scanf("%d", &n);

    printf("Enter the divisor: "); // дільник 
    scanf("%d", &divisor);

    if (divisor > 0) {
        int count = 0;
        while (count < n) { // цикл працює поки введено n чисел
            printf("Enter a number: ");
            scanf("%d", &num);

            if (num == 0) {
                break; // якщо введено 0, цикл завершується
            }

            if (num % divisor == 0) { // перевірка на кратність
                sum += num;
            }

            count++;
        }
    } else {
        printf("All is 0, because the divisor is 0\n");
    }

    printf("Sum of numbers divisible by %d: %d\n", divisor, sum);

    return 0;
}




// кількість чисел відома

int main2(void) {
    int divisor, num, sum = 0;

    printf("Enter the divisor: "); // дільник 
    scanf("%d", &divisor);

    if (divisor > 0) {
        while (num != 0) { // нескінченний цикл до введення 0
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