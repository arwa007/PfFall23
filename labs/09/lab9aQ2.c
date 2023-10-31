
#include <stdio.h>
void reverse(int *arr, int size){
	int tmp, i, j=0;
	for(i = size-1; i>size/2; i--){
		tmp = arr[j];
		arr[j] = arr[i];
		arr[i] = tmp;
		j++;
	}//end for
	
}//end reverse
int main(){
	int n = 10;
	int arr[n], i;
	for(i=0; i<n; i++){
		printf("Enter element %d: ", i+1);
		scanf("%d", &arr[i]);
	}//end for
	for(i=0; i<n; i++)
		printf("arr[%d]: %d\n", i, arr[i]);
	reverse(arr, n);
	printf("The reverse of your array is: \n");
	for(i=0; i<n; i++)
		printf("arr[%d]: %d\n", i, arr[i]);
}//end main


