#include <stdio.h>

void swap_columns(int matrix[][10], int n, int m); // функція для перестановки стовпців
void print_matrix(int matrix[][10], int n, int m); // виведення матриці на екран

/*
Дана ціла матриця, що складається з n рядків і m стовпців. Знайти
матрицю, що виходить з цієї перестановкою стовпців - першого з
останнім, другого з передостаннім і т. д.
*/

int main() {
    int n, m;


    printf("Введіть кількість рядків (n): ");// введення розмірів матриці
    scanf("%d", &n);
    printf("Введіть кількість стовпців (m): ");
    scanf("%d", &m);

    int matrix[n][m];  // декларація матриці

  
    printf("Введіть елементи матриці %dx%d:\n", n, m); // введення елементів матриці
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Елемент [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }


    swap_columns(matrix, n, m);

    printf("Матриця після перестановки стовпців:\n");
    print_matrix(matrix, n, m);

    return 0;
}

void swap_columns(int matrix[][10], int n, int m) {
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < m / 2; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][m - 1 - j];
            matrix[i][m - 1 - j] = temp;
        }
    }
}

void print_matrix(int matrix[][10], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
