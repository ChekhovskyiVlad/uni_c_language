#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*int main(void)
{

  char i;

    time_t t = time(NULL);
    double min = 2.5;
    double max = 10.5;
    srand(t);


    for(i = 1; i <= 10; i++){
        printf("%15f", (float)rand() / RAND_MAX * (max - min) + min); 
        if(i % 5 == 0)
            printf("\n");
    }


    float var = (float)rand() / RAND_MAX * (max - min) + min;
    

    return 0;
}*/


/*int main(void)
{

    int sum = 0;
    int number_of_sum, number_of_sequance;

    printf("how many numbers would you like to sum?\n");
    scanf("%d", &number_of_sum);


    printf("enter the numbers of sequance\n");
    scanf("%d", &number_of_sequance);

    for(int i = 0; i < number_of_sum; i++){
        sum += number_of_sequance;

        printf("sum: %d", sum);
    }

    return 0;
}*/





int replaceNmbers(void) // перестановка двух змінних без використання третьої змінної
{

    int a = 5, b = 7;

    a = a + b;
    b = a - b;
    a = a - b;




    return 0;
}


void swap(int *fa, int *fb)
{
    int temp;
    temp = *fa;
    *fa = *fb;
    *fb = temp;
}

int main()
{
    int a = 5, b = 7;
    printf("at first a = %d, b = %d\n", a , b);
    swap(&a, &b);

    printf("now a = %d, b = %d\n", a, b);

    return 0;
}



void find_min_sequence(int n, int *min_value, int *min_index) {
    int current_value;

    printf("Enter the number: ");
    scanf("%d", &current_value);

    *min_value = current_value;
    *min_index = 1;

    for (int i = 2; i <= n; i++) {
        printf("Введите число %d: ", i);
        scanf("%d", &current_value);

        if (current_value < *min_valкue) {
            *min_value = current_value;
            *min_index = i;
        }
    }
}

int main() {
    int n, min_value, min_index;

    printf("Enter the count of numbers: ");
    scanf("%d", &n);

    // шукаємо мінімально число із послідовності 
    find_min_sequence(n, &min_value, &min_index);

    // результат 
    printf("Минимальное значение: %d, его порядковый номер: %d\n", min_value, min_index);

    return 0;
}
