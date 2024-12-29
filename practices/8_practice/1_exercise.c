#include <stdio.h>
#include <math.h>

/*
1. Дано ціле число N (> 1 а також перший член A та знаменник D
геометричної прогресії. Сформувати та вивести масив розміру N, що
містить N перших членів даної прогресії:
A, A·D, A·D2, A·D3, ... .
*/


// Функція для заповнення масиву геометричної прогресії
void fill_array(int N, int progression[], int A, int D);

// адресна арифметика знайти транспоновану матрицю 
// 1 та 2 робота бонуси 
int main() {
    int N; // кількість членів прогресії
    int A, D; // перший член та знаменник прогресії

    printf("Enter the count of numbers (N > 1): ");
    scanf("%d", &N);

    if (N <= 1) {
        printf("Error: N must be greater than 1.\n");
        return 1;
    }

    printf("Enter the first term (A): ");
    scanf("%d", &A);

    printf("Enter the common ratio (D): ");
    scanf("%d", &D);

    int progression[N]; // створення масиву розміру N

    fill_array(N, progression, A, D);

    printf("Geometrical progression:\n");


    // виводимо масив
    for (int i = 0; i < N; i++) {
        printf("%d ", progression[i]);
    }
    printf("\n");

    return 0;
}
// понеділок 13:40

void fill_array(int N, int progression[], int A, int D) {
    for (int i = 0; i < N; i++) {
        progression[i] = A * pow(D, i); // знаменник D у степені i
    }
}