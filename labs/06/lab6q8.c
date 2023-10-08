 * Programmer: Arwa Feroze
 * Date: 8/10/23
 * Description: Display the reverse of an array.
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
		printf("\nS#%d: Enter your number: ", i);
		scanf("%d", &num);
		array[i] = num;
		printf("\n");
	}//end for
int reverse[size];
printf("The reverse of your array is: \n");
		for (i = 0;  i < size; i++){
		reverse[i] = array[size - i];
		printf("%d\n", reverse[i]);
	}//end for
	return 0;
}//end main 
