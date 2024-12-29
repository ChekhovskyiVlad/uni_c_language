#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> 


////////////        2
/*

В кінотеатрі три зали: Синя, Зелена та Жовта. Розробити програму
замовлення квитків до кінотеатру, яка розраховує вартість на основі
вказаного сеансу та зали.

        10:00  12:00  16:45   21:00
Синя    25 грн 35 грн 45 грн  50 грн
Зелена  30 грн 40 грн 50 грн  60 грн
Жовта   20 грн 25 грн 30 грн  35 грн

При замовленні квитків можна отримати знижку:
5 – 9 квитків – 5%
10 квитків і більше – 10%

*/

int main(void)
{

    int room,time, price;
    int sum = 0;
    int tickets; ///  розрахунок того скільки хоче замовити квитків
    int discount; // знижка 
    printf("How many would you like to buy?");
    scanf("%d", &tickets);



   for (int i = 0; i < tickets; i++) { 

    printf("Choose the room\n 1. Blue\n 2. Green\n 3. Yellow\n");
    scanf("%d", &room);

    printf("Choose time:\n 1. 10:00\n 2. 12:00\n 3. 16:45\n 4. 21:00\n");
    scanf("%d", &time);

    if(time > 4 || time < 0 || room > 3 || room < 0){ // перевірка щоб користувач ввів правильні дані 
    printf("The number was put incorrectly");
    return 0;
    } 

    switch (room) {
    case 1:
        switch (time) {
        case 1:
            sum += 25;
            break;
        case 2:
            sum += 35;
            break;
        case 3:
            sum += 45;
            break;
        case 4:
            sum += 50;
        break;
        }
        break; 

    case 2:
        switch (time) {
        case 1:
            sum += 30;
            break;
        case 2:
            sum += 40;
            break;
        case 3:
            sum += 50;
            break;
        case 4:
            sum += 60;
        break;
        }
        break;

    case 3:
        switch (time) {
        case 1:
            sum += 20;
            break;
        case 2:
            sum += 25;
            break;
        case 3:
            sum += 30;
            break;
        case 4:
            sum += 35;
            break;
        }
        break;
    }
  
}
    /*
    5 - 9 квитків 5% знижка
    10+ - 10%
    */
     
   if(tickets >= 5 && tickets <= 9) {
    discount = sum * 0.05;
    sum = sum - discount;

   } else if(tickets >= 10){
    discount = sum * 0.10;
    sum = sum - discount;
   }
    

   printf("%d", sum);

    return 0;
}

