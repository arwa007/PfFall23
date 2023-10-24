/*
* Programmer: Arwa Feroze
* Date: 24/10/2023
* Desc:  A user-defined function processArray calculates the sum, maximum, and
minimum values in the array. 
*/
#include <stdio.h>
void processArray(int arr[], int size){
	int i, sum, max=-99999, min=99999;
	for(i=0; i<size; i++){
		sum = sum + arr[i];
		if (arr[i] < min){
			min = arr[i];
		}//end if
		if (arr[i] > max){
			max = arr[i];
		}//end if
	}//end for
	printf("The sum of your array is: %d\n The maximum value of your array is: %d\n The minimum value of your array is: %d", sum, max, min);
}//end processArray

int main(){
	int size;
	printf("Enter the size of your array: ");
	scanf("%d", &size);
	int arr[size];
	for(int i=0; i<size; i++){
		printf("Enter number %d: ", i+1);
		scanf("%d", &arr[i]);
	}//end for
	processArray(arr, size);
}//end main