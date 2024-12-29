#include <stdio.h>
#include <ctype.h>
/*
Познайомитись із основними функціями бібліотеки ctype.h і виконати
завдання.
Задана послідовність символів.
a) підрахувати кількість цифр, що містяться в ній;
b) підрахувати кількість голосних літер, що містяться в ній;
c) Для кожного парного символа вивести його код (тобто номер у
кодовій таблиці).;
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch; // змінна для зберігання символу
    int number_count = 0; // лічильник цифр
    int vowel_count = 0;  // лічильник голосних літер

    printf("Enter the sequence of symbols:\n");

    while ((ch = getchar()) != EOF) {
        // перевірка, чи є символ цифрою
        if (isdigit(ch)) {
            number_count++;
        }

        // перевірка, чи є символ голосною літерою
        if (isalpha(ch)) {
            char lower_ch = tolower(ch); // перетворення до нижнього регістру
            if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
                vowel_count++;
            }
        }

        // перевірка на парність для цифр
         if (ch % 2 == 0) {
            printf("The cod of even number '%c': %d\n", ch, ch);
        }
         if (number_count == 0 && vowel_count == 0) {
            printf("No numbers or vowels were entered.\n");
         }
    }


   
    printf("\nThe count of numbers: %d\n", number_count);
    printf("The count of vowels: %d\n", vowel_count);
}

