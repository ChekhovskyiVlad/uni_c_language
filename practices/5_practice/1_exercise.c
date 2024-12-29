#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*
Напишіть програму, яка:
а) генерує задану кількість чисел за допомогою функції rand з
бібліотеки stdlib.h. Виведіть згенеровані значення на екран. Виконайте
програму двічі і порівняйте результати.
b) внесіть у попередній код зміни, щоб кожного разу генерувались
нові числа.
с) внесіть у попередній код зміни, щоб генерувались числа із
заданого діапазоні.
d) додайте до попереднього коду дії для генерації випадкових
дійсних чисел.
*/


int main(void)
{

    int min, max, n;

    printf("Enter the max range of numbers: \n");
    scanf("%d", &max);


    printf("Enter the min range of numbers: \n");
    scanf("%d", &min);


    printf("Enter the amount of numbers: \n");
    scanf("%d", &n);

    char i;

    time_t t = time(NULL);
    srand(t);


    for(i = 1; i <= n; i++){
        printf("%15f", (float)rand() / RAND_MAX * (max - min) + min); 
        if(i % 5 == 0)
            printf("\n");
    }


    int var = (float)rand() / RAND_MAX * (max - min) + min;


    return 0;
}