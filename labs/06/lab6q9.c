 * Programmer: Arwa Feroze
 * Date: 8/10/23
 * Description: Find the maximum and minimum number in an array.
 * Related files:
 */
  //--Include Files--//
 //--Global Varriables--//
#include <stdio.h>
int main(){
	int size, i=0, num, min = 99999999, max = 0;
	printf("How many elements do you want in your array?\n");
	scanf("%d", &size);
	int array[size];
	for (i=1; i<= size; i++){
		printf("\nS#%d: Enter your number: ", i);
		scanf("%d", &num);
		array[i] = num;
		printf("\n");
	}//end for
		for (i = 1;  i < size; i++){
		if (array[i] < min){
			min = array [i];
		}//end if
		if (array[i] > max){
        max = array [i];
		}//end if		
		}//end for
		printf("Maximum Number: %d\n", max);
		printf("Minimum Number: %d\n", min);	
	return 0;
}//end main 