#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Дано дійсну квадратну матрицю порядку N x N, всі
елементи якої різні. Знайти найбільший елемент
серед тих, що стоять на головній та побічній
діагоналях і поміняти його місцями з елементом, що
стоїть на перетині цих діагоналей.
*/

void fill_array(int **arr, int n); // заповнення масиву
void print_array(int **arr, int n); // виведення масиву у виді таблиці
void diagonal_array(int **arr, int n); // виведення головної діагоналі
void side_diagonal_array(int **arr, int n);  // виведення бічної діагоналі   
int find_max_elem(int **arr, int n, int *max_row, int *max_col); // знаходження максимального елементу  
void swap_with_intersection(int **arr, int n, int max_row, int max_col); // логіка заміни центрального елементу з найбільшим значенням

int main() {
    int n;

    printf("Enter the size of the matrix (N x N): ");
    scanf("%d", &n);

    // Виділення пам’яті для динамічної матриці
    int **arr = (int **)malloc(n * sizeof(int *)); // розмір одного показника
    for (int i = 0; i < n; i++) { /// для кожного елементу виділяється пам'ять для масиву 
        arr[i] = (int *)malloc(n * sizeof(int));
    }

    int max_row, max_col;

    fill_array(arr, n);

    printf("Original matrix:\n");
    print_array(arr, n);

    printf("The main diagonal:\n");
    diagonal_array(arr, n);
    printf("\n");

    printf("The side diagonal:\n");
    side_diagonal_array(arr, n);
    printf("\n");

    int max_elem = find_max_elem(arr, n, &max_row, &max_col);
    printf("The max element in diagonals: %d (row: %d, col: %d)\n", max_elem, max_row, max_col);

    swap_with_intersection(arr, n, max_row, max_col);

    printf("Modified matrix:\n");
    print_array(arr, n);

    // звільнення пам’яті кожного рядку
    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}

// заповнення масиву
void fill_array(int **arr, int n) {
    int total_numbers = n * n;
    srand(time(NULL));

    if(){
        random_numbers() ==
    }
    
}


// можно сделать через рекурсию, пока у нас не будет уникальный элемент, то мы вызываем эту функцию random_num

void random_numbers(int **arr, int n){

    int total_numbers = n * n;
    int num;
    int is_unique = 0;
    srand(time(NULL));
    int number = rand() % 100 + 1;

    for (int i = 0; i < total_numbers; i++) {
            for (int j = 0; j < total_numbers; j++){
                if (arr[i][j] == num) {
                is_unique = 0;

            }
        if (is_unique) {
            arr[i][j] = num;
        }
            }
        }

    return number; 
}

void print_array(int **arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void diagonal_array(int **arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%4d\t", arr[i][i]);
    }
    printf("\n");
}

void side_diagonal_array(int **arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%4d\t", arr[i][n - 1 - i]);
    }
    printf("\n");
}

int find_max_elem(int **arr, int n, int *max_row, int *max_col) {
    int max_elem = arr[0][0];
    *max_row = 0;
    *max_col = 0;

    // головна діагональ
    for (int i = 0; i < n; i++) {
        if (arr[i][i] > max_elem) {
            max_elem = arr[i][i];
            *max_row = i;
            *max_col = i;
        }
    }

    // побічна діагональ
    for (int i = 0; i < n; i++) {
        if (arr[i][n - 1 - i] > max_elem) {
            max_elem = arr[i][n - 1 - i];
            *max_row = i;
            *max_col = n - 1 - i;
        }
    }

    return max_elem;
}

void swap_with_intersection(int **arr, int n, int max_row, int max_col) {
    int center = n / 2; // знаходимо центральний елемент матриці

    // обмін значення центрального елемента з максимальним
    int temp = arr[center][center];
    arr[center][center] = arr[max_row][max_col];
    arr[max_row][max_col] = temp;
}
