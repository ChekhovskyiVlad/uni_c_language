#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

/*
Для одномірного цілого масиву визначити :
а) номер останнього по порядку елемента, що
відповідає наступній умові: сума елементів,
розташованих ліворуч від нього менше суми
елементів, розташованих праворуч.
b) перевірити, чи всі елементи у ньому різні. Якщо
так, вивести «YES», якщо ні, то вивести «NO».
*/


#define SIZE_OF_ARRAY 10 // кількість елементів у масиві

void fillArray(int array[]);        // заповнення масиву випадковими числами
void printArray(int array[]);        // виведення масиву
int sum_all_elements(int array[]);  // сума всіх елементів масиву
int find_last_element(int array[]); // знаходження елемента для умови завдання a
int equalse_elements(int array[]);  // перевірка унікальності елементів у масиві (завдання b)

int main(void)
{
    int array[SIZE_OF_ARRAY];


    fillArray(array); // формування масиву

    // виведення масиву на екран
    printf("Array: ");
    printArray(array);
    printf("\n");

    // пошук елемента за умовою
    int index = find_last_element(array);
    if (index != -1) {
        printf("Last index: %d\n", index);
    } else {
        printf("there is no element that satisfies the condition.\n"); // немає елементу що задовільняє умову
    }

    // перевірка унікальності елементів
    if (equalse_elements(array))
    {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

//  формування масиву випадкових чисел
void fillArray(int array[])
{
    srand(time(NULL));
    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        array[i] = rand() % 100 + 1;
    }
}


//   обчислення суми всіх елементів масиву
int sum_all_elements(int array[])
{
    int sum = 0;
    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        sum += array[i];
    }
    return sum;
}

// знаходження індексу останнього елемента, що задовольняє умову (завдання a)
int find_last_element(int array[])
{
    int total_sum = sum_all_elements(array);
    int left_sum = 0;
    int last_index = -1; // ініціалізуємо -1 для випадку, якщо підходящий елемент не буде знайдено

    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        left_sum += array[i];

        int right_sum = total_sum - left_sum - array[i]; // віднімаючи left_sum i array[i] ми знаходимо залишок
                                                        // , тобто суму елементів, що знаходиться праворуч від array[i]
                                                        
        if (left_sum < right_sum) {
            last_index = i; // оновлюється last_index кожен раз, коли знаходимо підходящий елемент
        }
    }

    return last_index; // повертається індекс останнього елемента, що задовольняє умову
}

// унікальність елементів (завдання b)
int equalse_elements(int array[])
{
    for (int i = 0; i < SIZE_OF_ARRAY - 1; i++) // size_array - 1 тому що він вже буде перевірений як "правий" елемент у внутрішньому циклі
    {
        for (int j = i + 1; j < SIZE_OF_ARRAY; j++) // int j = i + 1 щоб не перевіряти два рази array[i]
        {
            if (array[i] == array[j])
            {
                return false; // знаходимо однакові елементи
            }
        }
    }
    return true; // усі елементи є унікальні
}


//  виведення масиву на екран
void printArray(int array[])
{
    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        printf("%d ", array[i]);
    }
}