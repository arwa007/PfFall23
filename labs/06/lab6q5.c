 * Programmer: Arwa Feroze
 * Date: 8/10/23
 * Description: Printing a table for integers.
 * Related files:
 */
  //--Include Files--//
 //--Global Varriables--//
#include <stdio.h>
int main(){
	int num, count = 0;
	printf("Enter a positive integer.\n");
	scanf("%d", &num);
	while (count <= num){
		if (count%2 == 0){
			printf("%d   %d   %d   %d\n", count, count, count, count);
		}else{
			printf("    %d    %d\n", count, count);
}//end if
	count++;
}//end while
	return 0;
}//end main