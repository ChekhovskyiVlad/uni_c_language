#include <stdio.h>
#include <locale.h>

#include <stdio.h>

#include <stdio.h>





////////////    1
int main2(void) {
    int n, divisor, num, sum = 0;

    printf("Enter the number of numbers: "); // введення кількості чисел
    scanf("%d", &n);

    printf("Enter the divisor: "); // дільник 
    scanf("%d", &divisor);


    if(divisor > 0){


    for (int i = 0; i < n; i++) { // введення послідовності чисел
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num % divisor == 0) { // перевірка на кратність 
            sum += num;
        }
    }
    } else {
        printf("All is 0, because the divisor is 0");
    }
    printf("Num = %d\n", num);

    printf("Sum of numbers divisible by %d: %d\n", divisor, sum);

    return 0;
}



/*int main9(void) {

    int n, divisor, i, sum = 0;

    printf("enter the number of numbers");
    scanf("%d", &n);

    printf("enter the divisor");
    scanf("%d", &n);

    while (i < n)
    {
        int num;
        printf("enter the sequence of number");
        scanf("%d", &num);
    }
    

    return 0;
} */


////////   3

int main(void)
{

    int basis, exponent;
    int res = 1;

    printf("Enter the basis of the exponent: "); // введення бази
    scanf("%d", &basis);
 
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    if(exponent < 0){
        exponent = -exponent;
    }

    for(int i = 0; i < exponent; i++){
        res *= basis;
    }
    

    printf("%d", res);

    return 0;

}


///////////////    2



int mainr(void)
{

    int n, digit, last_digit;

    printf("Enter the number n:");
    scanf("%d", &n);


    printf("Enter the digit: ");
    scanf("%d", &digit);


    int square = n * n;

    


    while(square){

        int last_digit = digit % 10; // отримаємо останнє число 

        if(digit % 10 == last_digit) {
            printf("The number is in a square"); 
    }
        n /= 10;
    


    
    printf("The number is'nt square");



    return 0;
}
}

///  формальне відношення()



int main9() {

    int n, digit;


    printf("Enter the n:");
    scanf("%d", &n);


    printf("Enter the digit:");
    scanf("%d", &digit);


    int square = n * n;  // обчислюємо квадрат числа n
    int found = 0;       // прапорець для перевірки наявності цифри


    
    while (square > 0) {
        int last_digit = square % 10;  // отримуємо останню цифру числа
        if (last_digit == digit) {
            found = 1; 
        }
        square /= 10;  // видаляємо останню цифру числа
    }

    // Виводимо результат
    if (found) {
        printf("Digit is in n field");
    } else {
        printf("Digit isnt in n field");
    }
}

/////////////    4


int main4(void)
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