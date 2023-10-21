/*
 * Programmer: Arwa Feroze
 * Date: 21/10/23
 * Description: Take input of a 1D array and sort it into ascending order, then display it.
 * Related file:
 */
  //--Include Files--//
 //--Global Varriables--//

#include<stdio.h>
#include<stdbool.h>
int main(){
	int n, i, temp;
	bool sorted;

	printf("Enter the size of your 1D array.\n");
	scanf("%d", &n);
	int arr[n];

	for (i=0; i < n; i++){
		printf("Enter Element %d: ", i+1);
		scanf("%d", &arr[i]);
	}//end for

    do{
        sorted = true;

	for(i=0; i<n-1; i++){
		if (arr[i] > arr[i+1]){
			temp = arr[i+1];
			arr[i+1] = arr[i];
			arr[i] = temp;
		}//end if
	}//end for

	for(i=0; i<n-1; i++){
	     if (arr[i] > arr[i+1]){
	      sorted = false;   
	     }//end if
	}//end for

    }// end Do While 
    while(!sorted);

    printf("Here's the array in ascending order: \n");
	for (i=0; i < n; i++)
		printf("Element %d: %d\n ", i+1, arr[i]);	

}//end main






