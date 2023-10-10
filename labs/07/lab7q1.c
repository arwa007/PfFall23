 * Programmer: Arwa Feroze
 * Date: 10/10/23
 * Description: Dividing two numbers without using division operator.
 * Related files:
 */
  //--Include Files--//
 //--Global Varriables--//
#include <stdio.h>
int main(){
	int num1, num2, rem=0, quo=0;
	printf("Enter two positive whole numbers.\n");
	scanf("%d\n%d", &num1, &num2);
	while (num1 >= num2){ 	
		num1 = num1 - num2;
		quo = quo +1;
}//end while
 	rem = num1;
	printf("The quotient is %d. \nThe remainder is %d", quo, rem);
}//end main