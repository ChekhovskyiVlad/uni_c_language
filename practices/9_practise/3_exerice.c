#include <stdio.h>

#define SIZE 10 // розмір масиву

void fill_diagonal_matrix(int matrix[SIZE][SIZE], int size);
void print_matrix(int matrix[SIZE][SIZE], int size);

int main() {
    int matrix[SIZE][SIZE] = {0}; // ініціалізуємо масив нулями

    // заповнюємо масив
    fill_diagonal_matrix(matrix, SIZE);

    // виводимо масив
    print_matrix(matrix, SIZE);

    return 0;
}

// функція для заповнення масиву діагональними значеннями
void fill_diagonal_matrix(int matrix[SIZE][SIZE], int size) {
    for (int i = 0; i < size; i++) {
        matrix[i][i] = i; // Заповнюємо головну діагональ
    }
}

// функція для виведення масиву на екран
void print_matrix(int matrix[SIZE][SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
