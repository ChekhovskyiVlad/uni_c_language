#include <stdio.h>
#include <math.h>


void triangle_exists(int a, int b, int c);
double calculate_median(int a, int b, int c);
double calculate_height(int a, int b, int c);
double calculate_area(int a, int b, int c);


/*
    Реалізувати задачу 5 з практичної роботи No3 (про трикутники) за допомогою
    функцій

    a, b, c - сторони трикутника 
    item - вибір опції 
*/

int main(void)
{
    
    int a, b, c, item;
    double result;



    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    printf("c = ");
    scanf("%d", &c);

    triangle_exists(a, b, c);
 

    printf("1. Median of triangle\n"
           "2. Height of triangle\n"
           "3. Area of triangle\n");

    scanf("%d", &item);

    

    if(item > 0 && item < 4){
        switch (item) {
        case 1:
            result = calculate_median(a, b, c);
            printf("Median: %f\n", result);
            break;
        
        case 2: 
            result = calculate_height(a, b, c);
            printf("Height: %f\n", result);
            break;
        case 3: 
            result = calculate_area(a, b, c);
            printf("Area: %f\n", result);
            break;
        default:
            printf("Error\n");
            break;
        }
    }  else {
        printf("Error\n");
    }


    return 0;
}



void triangle_exists(int a, int b, int c) {
   
    if (a > 0 && b > 0 && c > 0) { // перевірка на додатність
        // перевірка на нерівність
        if ((a + b > c) && (a + c > b) && (b + c > a)) {
            printf("The triangle exists\n");
        } else {
            printf("The triangle doesn't exist\n");
        }
    } else {
        printf("The triangle doesn't exist\n");
    }
}


double calculate_median(int a, int b, int c){    // обчислення медіани
    return 0.5 * sqrt(2 * a * a + 2 * b * b - c * c);
}


double calculate_height(int a, int b, int c){     // обчислення висоти
    double p = (a + b + c) / 2.0; // Полупериметр
    return (2.0 / c) * sqrt(p * (p - a) * (p - b) * (p - c));
}


double calculate_area(int a, int b, int c){     // обчислення площі трикутника 
    double p = (a + b + c) / 2.0; // Напівпериметр
    return sqrt(p * (p - a) * (p - b) * (p - c));
}