/*
 * Programmer: Arwa Feroze
 * Date: 25/9/23
 * Description: Switch the first four digits with the last four digits of a binary number.
 * Related files:
 */
  //--Include Files--//
 //--Global Varriables--//
#include <stdio.h>
int main(){
	int num, a, b;
	printf("Enter a binary number: ");
	scanf("%d", &num);
	a = num%10000;
	b = num/10000;
	printf("%04d%04d", a, b);
	return 0; 
}//end main