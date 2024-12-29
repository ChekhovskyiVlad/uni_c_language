#include <stdio.h>

/*
Визначити, чи утворюють цифри в записі числа суворо зростаючу або суворо
спадаючу послідовність.
*/

int main(void)
{

    int sequence_numbers; // послідовність чисел
    int last_number, current_number; // останній та поточний елемент 

    printf("Enter the sequence of the numbers: ");
    scanf("%d", &sequence_numbers);

    last_number = sequence_numbers % 10; // перевіряємо на останню число

    sequence_numbers /= 10; // видаляємо останню цифру 
    


    while (sequence_numbers > 0)
    {

        current_number = sequence_numbers % 10;

        if(current_number >= last_number){
            printf("The sequence is decreasing\n");
        } else if(last_number >= current_number){
            printf("The sequence is incrising");
        } else {
            printf("The sequence not incrising and not falling");
        }

        last_number = current_number;
        sequence_numbers /= 10;

    }
    


    return 0;
}