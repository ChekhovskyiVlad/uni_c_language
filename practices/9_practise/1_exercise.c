#include <stdio.h>

void find_max_in_row(int rows, int cols, int matrix[rows][cols], int k); // 
void input_numbers(int rows, int cols, int matrix[rows][cols]);

/*
1. Даний двовимірний масив розміру M  N і ціле число K
(1  K  M).Знайти максимальний елемент K-го рядка даної матриці,
вивести елементи K-го рядка даної матриці та максимальний елемент.
*/

int main() {
    int m, n, k;

    printf("Введіть кількість рядків матриці (M): ");
    scanf("%d", &m);
    printf("Введіть кількість стовпців матриці (N): ");
    scanf("%d", &n);

    int matrix[m][n]; // оголошення двовимірного масиву

    // виклик функції для введення елементів матриці
    input_numbers(m, n, matrix);

    printf("Введіть номер рядка K (1 <= K <= %d): ", m);
    scanf("%d", &k);

    // виклик функції для обробки K-го рядка
    find_max_in_kth_row(m, n, matrix, k);

    return 0;
}

void input_numbers(int rows, int cols, int matrix[rows][cols]) {
    printf("Введіть елементи матриці %dx%d:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Елемент [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void find_max_in_kth_row(int rows, int cols, int matrix[rows][cols], int k) {
    // перевірка на коректність введення K
    if (k < 1 || k > rows) {
        printf("Некоректне значення K. Воно має бути в діапазоні від 1 до %d.\n", rows);
        return;
    }

    // ініціалізація максимуму першим елементом K-го рядка
    int max_value = matrix[k - 1][0];

    printf("Елементи %d-го рядка: ", k);
    for (int j = 0; j < cols; j++) {
        printf("%d ", matrix[k - 1][j]); // виводимо елемент рядка
        if (matrix[k - 1][j] > max_value) {
            max_value = matrix[k - 1][j]; // оновлюємо максимальне значення
        }
    }

    printf("\nМаксимальний елемент %d-го рядка: %d\n", k, max_value);
}
