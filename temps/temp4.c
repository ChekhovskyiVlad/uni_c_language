#include <stdio.h>

int main() {

    int w, x = -11, y = -11;
    w = 5 * x++ + ++y * (-7);


    printf("w = %d, x = %d, y = %d", w, x, y);
}