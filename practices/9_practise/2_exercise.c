#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 5
/*
В заданій квадратній матриці розміру M  M:
a) вивести елементи головної діагоналі (по діагоналі).
b) знайти суму елементів, які знаходяться над побічною діагоналлю,
враховуючи елементи на самій діагоналі.
c) знайти елемент, що є максимальним у своєму рядку та
мінімальним у своєму стовпці. Якщо такий елемент відсутній,
вивести 0.
Для цієї задачі на писати функції введення та виведення матриці, та
функції, які виконують вказані дії.
*/

void fill_array(int arr[M][M]); // заповнення матриці псевдовипадковими числами
void print_array(int arr[M][M]); //  виведення масиву на екран 
void diagonal_print_array(int arr[M][M]); // виведення головної діагоналі
void find_min_max_diagonal(int arr[M][M], int *min_main, int *max_main, int *min_side, int *max_side); // виведення макс. мін. значення

int main() {
    int arr[M][M];
    int min_main, max_main, min_side, max_side;  // мінімальне та максимальне значення в обох діагоналях

    fill_array(arr);         
    print_array(arr);        

    printf("The main diagonal: ");
    diagonal_print_array(arr); 

   
    find_min_max_diagonal(arr, &min_main, &max_main, &min_side, &max_side);


    printf("MIN MAIN: %d\n", min_main);
    printf("MAX MAIN: %d\n", max_main);

    printf("MIN SIDE: %d\n", min_side);
    printf("MAX SIDE: %d\n", max_side);

    return 0;
}

void fill_array(int arr[M][M]) {
    srand(time(NULL));
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            arr[i][j] = rand() % 100 + 1; 
        }
    }
}

// вивід матриці на екран
void print_array(int arr[M][M]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            printf("%4d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// вивід головної діагоналі
void diagonal_print_array(int arr[M][M]) {
    for (int i = 0; i < M; i++) {
        printf("%4d ", arr[i][i]); 
    }
    printf("\n");
}

// мінімальне та максимальне значення у обох діагоналях
void find_min_max_diagonal(int arr[M][M], int *min_main, int *max_main, int *min_side, int *max_side) {

    *min_main = arr[0][0];
    *max_main = arr[0][0];

    
    *min_side = arr[0][M-1];
    *max_side = arr[0][M-1];


    for (int i = 1; i < M; i++) {
    
        if (arr[i][i] < *min_main) { 

            
            *min_main = arr[i][i];
        }
        if (arr[i][i] > *max_main) {
            *max_main = arr[i][i];
        }


        if (arr[i][M - 1 - i] < *min_side) {
            *min_side = arr[i][M - 1 - i];
        }
        if (arr[i][M - 1 - i] > *max_side) {
            *max_side = arr[i][M - 1 - i];
        }
    }
}


