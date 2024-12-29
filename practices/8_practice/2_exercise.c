#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10


/*
2. Даний цілий масив розміру N. вивести всі парні числа, що містяться
в даному масиві, в порядку зменшення їх індексів, а також їх кількість
K. Значення елементів масиву згенерувати випадковим чином.
*/

void even_numbers(int arr[N]);
void fill_array(int arr[N]);

int main() {
    int arr[N];
   
    fill_array(arr);
    
    even_numbers(arr);
    
    return 0;
}

void even_numbers(int arr[N]) {
    int K = 0;  // кількість парних чисел
    
    // виводимо парні числа у порядку зменшення індексів
    printf("Even numbers:\n");
    for (int i = N - 1; i >= 0; i--) {
        if (arr[i] % 2 == 0) {
            printf("arr[%d] = %d\n", i, arr[i]);
            K++;
        }
    }
    
    // кількість парних чисел
    printf("Total even numbers (K): %d\n", K);
}


void fill_array(int arr[N]){
    srand(time(NULL));
    
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 100;  // випадкове число 
    }
}