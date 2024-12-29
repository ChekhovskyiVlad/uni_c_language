#include <stdio.h>

/*
    
Напишіть і протестуйте функцію, яка підраховує кількість від’ємних
чисел в заданій послідовності, та обчислює їх середнє арифметичне
значення. Послідовність не зберігається в ОЗП.

*/

int countAverageValue();

int main()
{

    countAverageValue();


    return 0;
}

int countAverageValue() {
    
    int sequence; 
    int count = 0;
    int sum = 0;

    int average_value;

    while(sequence != 0) // цикл виконується поки користувач не введе нуль
    {
    
        printf("(if you want to stop press 0 )Enter the sequence: ");
        scanf("%d", &sequence);

        if(sequence < 0){
            count++; // рахуємо кількість введених від'ємних чисел
            sum += sequence; 
        }

    }

    if(count > 0){
        average_value = sum / count; // обчислення середнього значення (ділимо суму на кількість)
    } else {
        printf("The nagative numbers were`nt input");
    }

    printf("%d", average_value);
}