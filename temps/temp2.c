#include <stdio.h>


/*
    Даний двовимірний масив розміру M  N і ціле число K
    (1 < K < M).Знайти максимальний елемент K-го рядка даної матриці,
    вивести елементи K-го рядка даної матриці та максимальний елемент.

    M - рядки
    N - стовпець
    K - номер рядка
*/

void input_array(int M, int N, int array[M][N]);



int main(void)
{
    int M, N;


    // введення розміру матриці
    printf("Enter the number of rows, M: ");
    scanf("%d", &M);
    printf("Enter the number of columns, N:");
    scanf("%d", &N);

    int array[M][N];
    input_array(M, N, array);


    // введення номера рядку K 

    printf("Enter K (1 <= K <= %d): ", M);
    scanf("%d", &K);


    // перевірка на те, що користувач ввів правильно значення в правильному діапазоні 
    if(K < 1 || K > M){
        
    }

    return 0;
}



void input_array(int M, int N,int array[M][N]){
    for (int i = 0; i < M; i++){
        for (int j = 0; i < N; i++)
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &array[M][N]);
        }
        
    }
    
}