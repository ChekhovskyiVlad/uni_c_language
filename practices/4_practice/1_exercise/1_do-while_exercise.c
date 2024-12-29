#include <stdio.h>



// кількість чисел відома 

int main(void) {
    int n, divisor, num, sum = 0;

    printf("Enter the number of numbers: "); // введення кількості чисел
    scanf("%d", &n);

    printf("Enter the divisor: "); // дільник 
    scanf("%d", &divisor);

    if (divisor > 0) {
        int count = 0;
        do {
            printf("Enter a number: ");
            scanf("%d", &num);

            if (num == 0) {
                break; // якщо введено 0, завершити цикл
            }

            if (num % divisor == 0) { // перевірка на кратність
                sum += num;
            }

            count++;
        } while (count < n); // цикл триває поки введено менше n чисел
    } else {
        printf("All is 0, because the divisor is 0\n");
    }

    printf("Sum of numbers divisible by %d: %d\n", divisor, sum);

    return 0;
}



// кількість чисел невідома заздалегіть
int main1(void) {
    int divisor, num, sum = 0;

    printf("Enter the divisor: "); // дільник 
    scanf("%d", &divisor);

    if (divisor > 0) {
        do {
            printf("Enter a number: ");
            scanf("%d", &num);

            if (num == 0) {
                break; // якщо введено 0, завершити цикл
            }

            if (num % divisor == 0) { // перевірка на кратність
                sum += num;
            }

        } while (1); // нескінченний цикл до введення 0
    } else {
        printf("All is 0, because the divisor is 0\n");
    }

    printf("Sum of numbers divisible by %d: %d\n", divisor, sum);

    return 0;
}