/*
* Programmer: Arwa Feroze
* Date: 24/10/2023
* Desc: Find a continuous sub-array in an unsorted array which adds to a given number S.
*/
#include <stdio.h>

void findSubarray(int arr[], int n, int target) {
    int current_sum = 0, start = 0, end = 0;

    while (end < n) {
        current_sum += arr[end];

        while (current_sum > target) {
            current_sum -= arr[start];
            start++;
        }

        if (current_sum == target) {
            printf("The elements from index %d to %d when summed result in %d.\n", start, end, target);
            printf("Subarray: ");
            for (int i = start; i <= end; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
            return;
        }

        end++;
    }

    printf("No subarray found with the given sum.\n");
}

int main() {
    int target_sum = 12;
    int input_array[] = {1, 2, 3, 7, 5};
    int size = sizeof(input_array) / sizeof(input_array[0]);

    findSubarray(input_array, size, target_sum);

    return 0;
}
