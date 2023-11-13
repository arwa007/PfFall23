/*
* Programmer: Arwa Feroze
* Date:31/10/2023
* Description: Write recursive function to print n Fibonacci numbers.
*/
#include <stdio.h>

int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;  
    printf("Enter the number of Fibonacci numbers to print: ");
    scanf("%d", &n);
    printf("First %d Fibonacci Numbers:\n", n);
    for (int i = 0; i < n; ++i) {
        printf("%d ", fib(i));
    }

    return 0;
}
