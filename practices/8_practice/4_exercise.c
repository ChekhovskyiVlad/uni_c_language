#include <stdio.h>


/*
Даний масив розміру N и цілі числа K и L (1 ≤ K ≤L ≤N). Знайти
середнє арифметичне всіх елементів масиву, крім елементів із
номерами від K до L включно.
*/

#include <stdio.h>

void fill_array(int array[], int N);
int avarage_number(int sum, int count, int array[], int N, int K, int L);

int main() {
    int N, K, L; // N - розмір масиву; K, K - цілі числа
    int sum = 0; // сума всіх елементів для знаходження середнього арифметичного
    int count = 0; // кількість елементів 
    
    printf("Enter (N): ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N must be more than 0.\n");
        return 1;
    }

   
    int array[N]; // створюємо масив  

    fill_array(array, N);

    avarage_number(sum, count, array, N,K,L);


    printf("Enter %d elements:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    
    printf("Enter K and L (1 ≤ K ≤ L ≤ %d): ", N);
    scanf("%d %d", &K, &L); // вводимо K, L


    if (K < 1 || L > N || K > L) { // перевіряємо коректність введення 
        printf("Error\n");
        return 1;
    }


    if (count == 0) {
        printf("All items are excluded. The arithmetic mean is not defined.\n");
    } else {
        double average = (double)sum / count;
        printf("Average (without [%d, %d]): %.2f\n", K, L, average);
    }

    return 0;
}

void fill_array(int array[], int N){
    printf("Enter %d elements:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }
}

int avarage_number(int sum, int count, int array[], int N, int K, int L){

     for (int i = 0; i < N; i++) {  /// обчислюємо середнє арифметичне
        if (i + 1 < K || i + 1 > L) { // Враховуємо лише елементи поза межами [K, L]
            sum += array[i];
            count++;
        }
    }
}

