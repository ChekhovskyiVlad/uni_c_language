#include <stdio.h>
/*  
Напишіть і протестуйте функцію, яка знаходить мінімум в
послідовності чисел, що вводяться, а також його номер. Послідовність
не зберігається в ОЗП.
*/

int read_input(int *value); // функція для зчитування елементів 
void update_minimum(int *current_value, int *min_value, int *min_index, int current_index);// функція для оновлення мінімального значення
void find_min_and_index();// основна функція для пошуку мінімуму


int main() {
    find_min_and_index();
    return 0;
}

void find_min_and_index() {
    printf("Вводьте числа (для завершення введення введіть 'q'):\n");

    int min_value, current_value, min_index = -1, current_index = 0;
    char input[20];

    while (1) {
        printf("Число %d: ", current_index + 1);

        if (scanf("%s", input) != 1) break; // зчитування введення
        if (input[0] == 'q' && input[1] == '\0') break; // завершення вводу

        if (sscanf(input, "%d", &current_value) != 1) { // перевірка чи це число
            printf("Будь ласка, введіть коректне число або 'q'.\n");
            continue;
        }

        if (min_index == -1 || current_value < min_value) { // оновлення мінімуму
            min_value = current_value;
            min_index = current_index + 1;
        }

        current_index++;
    }

    if (min_index != -1) {
        printf("Мінімальне число: %d, його номер: %d\n", min_value, min_index);
    } else {
        printf("Не було введено жодного числа.\n");
    }
}

