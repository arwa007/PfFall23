 * Programmer: Arwa Feroze
 * Date: 8/10/23
 * Description: Match Sticks Game.
 * Related files:
 */
  //--Include Files--//
 //--Global Varriables--//
#include <stdio.h>
int main(){
	int size, i=0, num, total=0;
	printf("How many elements do you want in your array?\n");
	scanf("%d", &size);
	int array[size];
	for (i=1; i<= size; i++){
		printf("\nS# %d: Enter your number: ", i);
		scanf("%d", &num);
		array[i] = num;
		printf("\n");
	}//end for
		for (i=1;  i <= size; i++){
		total = total + array[i];
	}//end for
	printf("The sum of all elements is %d", total);
	return 0;
}//end main 