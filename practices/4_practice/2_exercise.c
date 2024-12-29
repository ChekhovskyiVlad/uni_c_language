#include <stdio.h>

/*
Дано натуральне число n. З'ясувати, чи входить вказана користувачем цифра digit
до запису числа n^2
*/

int main(void) {
    int n, digit;

    printf("Enter the number n: ");
    scanf("%d", &n);

    printf("Enter the digit: ");
    scanf("%d", &digit);

    
    int square = n * n; // квадрат числа

    // Перевіряємо, чи входить цифра digit до числа n^2
    int found = 0;  // прапор, що вказує, чи знайшли цифру, чи ні


    while (square > 0) {
        int last_digit = square % 10;  // отримуємо останню цифру

        if (last_digit == digit) {
            found = 1;
            break;  // якщо знайшли, виходимо з циклу
        }

        square /= 10;  // відкидаємо останню цифру
    }

    // Виводимо результат
    if (found) {
        printf("The digit is in the square of the number\n");
    } else {
        printf("The digit is not in the square of the number\n");
    }

    return 0;
}