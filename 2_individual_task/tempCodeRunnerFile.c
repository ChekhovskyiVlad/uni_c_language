
        }
            }
        }
    }
    
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
