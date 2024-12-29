#include <stdio.h>

/*
Написати функцію визначення максимального числа з двох заданих.
Використовуючи цю функцію обчислити значення
виразу max(a,a + b) + max(a, b + c) / 1 + max(a + bc, 115 ) для заданих дійсних чисел a, b, c.
*/

double max(double a, double b); // визначення максимального числа із двух заданих 
double calculate_max(double a, double b, double c); // обчислення заданого виразу 


double main(void)
{

    double a, b, c;
    double result;


    printf("a = ");
    scanf("%lf", &a);

    printf("b = ");
    scanf("%lf", &b);

    printf("c = ");
    scanf("%lf", &c);

    result = calculate_max(a, b, c); // викликаємо функцію для обчислення результату 
    
    
    if (a && b && c > 0)
    {
        printf("%lf", result);
    } else {

    printf("Error");
    }
    

   
    return 0;
}


double max(double a, double b){
    return (a > b) ? a : b;
}

double calculate_max(double a, double b, double c){
   return max(a, a + b) + max(a, b + c) / (1 + max(a + b * c,115)); //  обчислення виразу 
}