#include <stdio.h>
#include <math.h>


int main1(void) //// 1 
{
    double x, y, f;

    
    printf("x = ");
    scanf("%lf", &x);

    printf("y = ");
    scanf("%lf", &y);

    // формула для обчислення f
    f = (sqrt(fabs(x + 4.62)) - y) / (1 + 2 * x * x + y * y);


    printf("f = %.4lf\n", f);


    return 0;
}



#include <stdio.h>

int main6() {
    int a, b, c, cuts;
    
    // Введення розмірів паралелепіпеда
    printf("Введіть розміри паралелепіпеда (a, b, c):\n");
    scanf("%d %d %d", &a, &b, &c);
    
    // Обчислення мінімальної кількості розрізів
  
    if(a && b && c > 0)
    {
      cuts = a + b + c - 3;
    } else {
        printf("паралелепіпед не існує");
    }
    
    // Виведення результату
    printf("Мінімальна кількість розрізів: %d\n", cuts);
    
    return 0;
}


int  main4s(void) ///// 3 
{

    int n, d;

    printf("n = ");
    scanf("%d", &n);

    printf("d = ");
    scanf("%d", &d);

    // перевірка дроба на правильність
    if(n < d && d > 0) {
        printf("proper fraction");
    } else {
        printf("improper fraction");
    }

    return 0;
}




/*
int main5() {
    int x1, y1, x2, y2, queen,knight;
    
    // Введення координат ферзя і коня
    printf("Введіть координати ферзя (x1 y1): ");
    scanf("%d %d", &x1, &y1);


    printf("Введіть координати коня (x2 y2): ");
    scanf("%d %d", &x2, &y2);


    if(x1 && y1 && x2 && y2 <= 8){
    
    // Перевірка, чи б'є ферзь коня
    queen = (x1 == x2) || (y1 == y2) || (abs(x1 - x2) == abs(y1 - y2));
    
    // Перевірка, чи б'є кінь ферзя
    knight = (abs(x1 - x2) == 2 && abs(y1 - y2) == 1) || 
                        (abs(x1 - x2) == 1 && abs(y1 - y2) == 2);
    } else {
        printf("Error");
    }
    

    // спочатку прелюдіє, тіло коду, та тести(тестові данні, які вводяться)


    // Виведення результату
    if (queen && knight) {
        printf("Ферзь і кінь б'ють один одного.\n");
    } else if (queen) {
        printf("Ферзь б'є коня.\n");
    } else if (knight) {
        printf("Кінь б'є ферзя.\n");
    } else {
        printf("Фігури не загрожують одна одній.\n");
    }
    
    return 0;
}
*/



int main(void)
{
    int a, b, c, item;
    double median, height, s, p;
    
    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    printf("c = ");
    scanf("%d", &c);

    if (a + b > c && a + c > b && b + c > a) {  // перевірка трикутника на існування 
        printf("A triangle exists\n");
    } else {
        printf("A triangle doesn't exist\n");
        return 1; // завершення програми, якщо трикутник існує
    }

    printf("1. Median of triangle\n"
           "2. Height of triangle\n"
           "3. Area of triangle\n");

    scanf("%d", &item);

    if(item > 0 && item < 4) {


    switch (item) {
    case 1:
median = (0.5) * sqrt(2 * a * a + 2 * b * b - c * c);
        break;

    case 2:
        p = (a + b + c) / 2.0; // Полупериметр
        height = (2.0 / c) * sqrt(p * (p - a) * (p - b) * (p - c));
        printf("Height: %f\n", height);
        break;

    case 3:
        
        p = (a + b + c) / 2.0; // Полупериметр
        s = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("Area: %f\n", s);
        break;

    default:
        printf("Error\n");
        break;
    }

    } else { 
        printf("Error");
    }
    return 0;
}




