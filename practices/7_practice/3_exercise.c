#include <stdio.h>

/*
Напишіть і протестуйте функцію, яка приймає в якості аргументів
адреси трьох змінних double та поміщає найменше значення в першу
змінну, середнє значення – в другу, а найбільше значення – в третю.
Виведіть нові значення в функції main().
*/
void sort_variables(double *ptr_var_1, double *ptr_var_2, double *ptr_var_3);

int main() 
{

    double a, b, c;

    double var_1, var_2, var_3;
    printf("Enter three variables\nvariable = ");
    scanf("%lf", &var_1);

    printf("variable = ");
    scanf("%lf", &var_2);

    printf("variable = ");
    scanf("%lf", &var_3);

    
    printf("At first = %lf, %lf, %lf\n",var_1, var_2, var_3);

    sort_variables(&var_1, &var_2, &var_3);

    printf("Now = %lf, %lf, %lf",var_1, var_2, var_3 );

    return 0;
}


void sort_variables(double *ptr_var_1, double *ptr_var_2, double *ptr_var_3) { 

    // Сортування методом "бульбашки"
    double temp; 
    if (*ptr_var_1 > *ptr_var_2) { 
        temp = *ptr_var_1; 
        *ptr_var_1 = *ptr_var_2; 
        *ptr_var_2 = temp; 
    } 
    if (*ptr_var_1 > *ptr_var_3) { 
        temp = *ptr_var_1; 
        *ptr_var_1 = *ptr_var_3; 
        *ptr_var_3 = temp;
    } 
    if (*ptr_var_2 > *ptr_var_3) {
        temp = *ptr_var_2;
        *ptr_var_2 = *ptr_var_3;
        *ptr_var_3 = temp;
    }
}