#include <stdio.h>
#include <stdbool.h>



// введення елементів массиву з клавіатури
void input_el(int arrray[], int el);

int input_el(int array[], int el) {
    for(int i; i < el; i++){
        printf("Input the elements: ");
        scanf("%d", &array[i]);
    }
}


// перевірка послідовності методом а 
bool methodA(int array[], int el);


bool methodA(int array[], int el){

    int d = array[1] - array[0]; // різниця між елементами

    for(int i = 1; i < el - 1; i++){
        if(array[i + 1] - array[i] == d){
            printf("It's arithmetic progression");
        } else {
            printf("It is not arithmetical progression");
        }
    }

    return true;

}


// виведення елементів массиву в прямому порядку 

void 

 
 

int main(void)
{

    int el;

    printf("Enter the amount of the sequence: ")
    scanf("%d", &el);

    int array[el];


    // введення елементів массиву
    input_el(array, el);


    // метод а 

    if(methodA(array, el)) {
        printf("")
    }


    return 0;
}int equalse_elements(int array[], int size_array){
for (int i = 1; i < size_array; i++) // беремо одразу другий елемент 
{
    if(array[i] != array[0]){ // чи є елемент однаковий
        return false;
    }

    return true; // всі елементи однакові
}
}