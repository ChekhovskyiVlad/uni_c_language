#include <stdio.h>

/*Користувач вводить основу і показник – цілі числа. Обчислити заданий степінь
заданого числа. (Показник може бути і додатним і від’ємним числом)*/

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