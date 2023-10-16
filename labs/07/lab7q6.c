/*
 * Programmer: Arwa Feroze
 * Date: 16/10/23
 * Description: Take input of a 1D array and output the frequency of each element.
 */
# include <stdio.h>
# include <stdbool.h>
int main(){
	int i, j, k, size, freq=0;
	printf("Enter the size of your array: ");
	scanf("%d", &size);
	int arr[size];
	int done[size];
	bool isDone = false;
	    for (i=0; i<size; i++){
	        done[i]= -1;
	    }//end for 
	for (i=0; i < size; i++){
			printf("Enter Element %d: ", i+1);
			scanf("%d", &arr[i]);
	}//end for

	for (i=0; i < size; i++){
	    isDone = false;
	    freq = 0;
		for (j=0; j < size; j++){
			if (arr[i] == arr[j]){
				freq = freq + 1 ;
			}//end if
		}//end for
		for (k=0; k < size; k++){
				if (arr[i] == done[k]){
				isDone= true;
				break;
				}//end if
			}//end for
		if(!isDone){
		printf("The frequency of %d = %d.\n", arr[i], freq);
		done[i] = arr[i];
		}//end if
	}//end for
return 0;
}//end main

