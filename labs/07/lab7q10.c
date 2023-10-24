/*
*Programmer: Arwa Feroze
*Date: 24/10/2023
*Description: Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-
array which adds to a given number S. In case of multiple subarrays, return the subarray which comes
first on moving from left to right.
*/

#include <stdio.h>
#include <stdbool.h>

int main() {
    int S, size, i;

    printf("Enter the size of your array: ");
    scanf("%d", &size);

    int arr[size];
    
    for (i = 0; i < size; i++) {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Give a number S: ");
    scanf("%d", &S);

    int start = 0;
    int sum = 0;
    bool processSuccessful = false;

    for (i = 0; i < size; i++) {
        sum += arr[i];

        while (sum > S) {
            sum -= arr[start];
            start++;
        }

        if (sum == S) {
            printf("The Elements from  %d to %d when summed result in the output of %d.\n", start + 1, i + 1, S);
            processSuccessful = true;
            break;
        }
    }

    if (!processSuccessful) {
        printf("No subarray found that adds up to %d.\n", S);
    }

    return 0;
}
