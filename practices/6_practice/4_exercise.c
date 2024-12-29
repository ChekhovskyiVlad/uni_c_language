#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <ctype.h>
/*
Написати функцію, яка перевіряє, чи число є простим. Використовуючи цю
функцію визначити скільки простих чисел у введеній користувачем
послідовності.
*/

bool isPrime(int prime_numbers);

int main(void)
{

    int prime_numbers;
    int count = 0;
    int index = 0;
    printf("Enter numbers to check if they are prime(0 to stop): ");
    
    

    while (prime_numbers != 0) { // умова продовжує цикл, поки користувач не введе 0
        if (isPrime(prime_numbers)) {
            count++; // якщо число просте, то рахунок збільшується на один
        }

        scanf("%d", &prime_numbers);
        index++;
        if (prime_numbers == 0)
        {
            index--;
        }
    }


    printf("Number of prime numbers entered: %d\n", count);
    printf("The user was entering: %d", index);
    return 0;
}

bool isPrime(int prime_numbers){    

// sqrt(prime_numbers) — обмеження діапазону перевірки дільників.
// якщо число має дільник, більший за його квадратний корінь, то відповідний менший дільник вже знайдено до цього.

    for (int i = 2; i <= sqrt(prime_numbers); i++){  // перевіряємо до квадратного корня
        if(prime_numbers % i == 0){
            return false; // якщо є дільник число не просте
        }
     }
  
  return true; // якщо не знайшли, то просте

    if (prime_numbers <= 1) { 
        return false; // числа, які більше або не дорівнюють 1 не прості 
    }
    
    
}