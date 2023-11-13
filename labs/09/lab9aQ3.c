/*
* Programmer: Arwa Feroze
* Date: 31/10/2023
* Description: Commenting faults.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed for random values
    srand(time(NULL));

    // Get the size of the arrays from the user
    int N;
    printf("Enter the size N for the arrays: ");
    scanf("%d", &N);

    // Create arrays of char, int, and long long int using variable length arrays
    char charArray[N];
    int intArray[N];
    long long int longLongArray[N];

    // Initialize arrays with random values
    for (int i = 0; i < N; ++i) {
        charArray[i] = rand() % 128; // Random char values
        intArray[i] = rand();
        longLongArray[i] = ((long long)rand() << 32) | rand(); // Combine two random ints for long long
    }

    // Print the addresses and values using pointer arithmetic
    printf("\nAddresses and values for charArray:\n");
    for (int i = 0; i < N; ++i) {
        printf("Address: %p, Value: %c\n", &charArray[i], charArray[i]);
    }

    printf("\nAddresses and values for intArray:\n");
    for (int i = 0; i < N; ++i) {
        printf("Address: %p, Value: %d\n", &intArray[i], intArray[i]);
    }

    printf("\nAddresses and values for longLongArray:\n");
    for (int i = 0; i < N; ++i) {
        printf("Address: %p, Value: %lld\n", &longLongArray[i], longLongArray[i]);
    }
/*
    Explanation for pointer arithmetic:

    Pointer arithmetic depends on the type of the pointer. When you add an integer value to a pointer,
    the compiler automatically scales the offset based on the size of the type the pointer points to.

    For example, if you have a char pointer and you add 1 to it, the pointer will move 1 byte because
    the size of a char is 1 byte. If you have an int pointer and you add 1 to it, the pointer will move
    4 bytes (on most systems) because the size of an int is usually 4 bytes.

    The same logic applies to long long int, where adding 1 to a pointer will typically move 8 bytes
    (assuming a long long int is 8 bytes on your system).
    */
    return 0;
}
