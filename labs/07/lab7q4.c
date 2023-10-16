/*
Programmer: Arwa Feroze
Date: 10/16/2023
Desc: Practicing PF mid
/*
# include <stdio.h>
# include <stdbool.h>
int main(){
	int i, j, size;
	bool isSquare = true;
	printf("Enter the size of your square matrix/array: ");
	scanf("%d", &size);
	int arr[size][size];
	printf("Enter the Elements of your matrix/array: ");	
	for (i=0; i < size; i++){
		for (j=0; j < size; j++){
			printf("Enter Element (%d, %d): ", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}//end for
	}//end for
	for (i=1; i < size; i++){
		for (j=1; j < size; j++){
			if (arr[i][j] != arr[j][i]){
				isSquare = false;
			}//end if
		}//end for
	}//end for
	if (isSquare){
		printf("Array is symmetric.");
	}else{
		printf("Array is not symmetric.");
	}//end if
return 0;
}//end main

