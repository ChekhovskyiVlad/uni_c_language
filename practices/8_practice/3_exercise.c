#include <stdio.h>

/*
3. Даний масив A розміру N. Вивести спочатку його елементи з
парними номерами (у порядку зростання номерів), а потім елементи з
непарними номерами (у порядку спадання номерів).
Умовний оператор не використовувати. Значення елементів масиву
ввести з клавіатури.
*/


#define N 10

void get_elements(int arr[N]); // введення значень з клавіатури
void even_numbers(int arr[N]); // виведення елементів із парними номерами
void odd_numbers(int arr[N]);  // виведення елементів із непарними номерами

int main() {
    int arr[N];

    get_elements(arr); // введення елементів в масив

    even_numbers(arr); // виведення елементів із парними номерами
    odd_numbers(arr);  // виведення елементів із непарними номерами

    return 0;
}

void get_elements(int arr[N]) {
    for (int i = 0; i < N; i++) {
        printf("Enter the number [%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

void even_numbers(int arr[N]) {
    printf("Even:\n");
    for (int i = 0; i < N; i += 2) {// ми як би перестрибуємо непарні номери
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

void odd_numbers(int arr[N]) {
    printf("Odd:\n");
    for (int i = N - 1; i > 0; i -= 2) { // індекси N-1, N-3 ..
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}
