* Programmer: Arwa Feroze
 * Date: 10/10/23
 * Description: Sum of digits using array.
 * Related file:
 */
  //--Include Files--//
 //--Global Varriables--//
#include <stdio.h>
int main(){
	int n, i, sum=0;
	printf("How many digits does your number have?\n");
	scanf("%d", &n);
	int num[n];
	printf("Enter number with a space between each digit:\n");
	for(i = 1; i<=n; i++){
		scanf("%d", &num[i]);
		sum = sum + num[i];
	}//end for
	printf("The sum of your digits is: %d", sum);
	return 0;
}//end main
