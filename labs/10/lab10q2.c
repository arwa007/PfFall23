/*
* Programmer: Arwa Feroze
* Date: 14/11/2023
* Desc: Swap the values of two variables using only pointers (using XOR).
*/
#include <stdio.h>

void swapValues(void *a, void *b, size_t size) {
    unsigned char *p = (unsigned char *)a;
    unsigned char *q = (unsigned char *)b;

    for (size_t i = 0; i < size; ++i) {
        *p = *p ^ *q;
        *q = *p ^ *q;
        *p = *p ^ *q;

        ++p;
        ++q;
    }
}

int main() {
    int x = 10, y = 20;
    double a = 5.5, b = 8.8;

    printf("Before swapping:\n");
    printf("x = %d, y = %d\n", x, y);
    printf("a = %f, b = %f\n", a, b);

    swapValues(&x, &y, sizeof(x));
   
    swapValues(&a, &b, sizeof(a));

    printf("\nAfter swapping:\n");
    printf("x = %d, y = %d\n", x, y);
    printf("a = %f, b = %f\n", a, b);

    return 0;
}
