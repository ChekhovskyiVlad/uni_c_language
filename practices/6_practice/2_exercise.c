#include <stdio.h>


/*

 Написати функцію обчислення НСК (найменше спільне кратне) двох заданих
    невід’ємних цілих чисел. Використовуючи цю функцію обчислити значення НСК
    для трьох заданих невід’ємних цілих чисел.

    a, b - задані невід'ємні цілі числа 
    d - НСД
    k - НСК

*/



//  обчислення НСД (найбільший спільний дільник) за допомогою алгоритму Евкліда
int ncd(int a, int b);

// обчислення НСК (найменше спільне кратне)
int nck(int a, int b);

//  обчислення НСК трьох чисел
int nck_three(int a, int b, int c);

int main() {
    int a, b, c;

    printf("Enter three positive numbers:\n");


    
    printf("a: ");
    scanf("%d", &a);


    printf("b: ");
    scanf("%d", &b);

    printf("c: ");
    scanf("%d", &c);

    // перевірка на невід'ємність
    if (a < 0 || b < 0 || c < 0) {
        printf("Numbers must be negative\n");
        return 1;
    }

  
    int result = nck_three(a, b, c); // обчислення нск

   
    printf("NCK for numbers %d, %d and %d: %d\n", a, b, c, result);

    return 0;
}


int ncd(int a, int b) { // логіка обчислення нсд за допомогою алгоритма евкліда
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int nck(int a, int b) {
    return ((a * b)/ ncd(a, b)); // формула для обчислення нск
}


int nck_three(int a, int b, int c) {
    return nck(nck(a, b), c);
}