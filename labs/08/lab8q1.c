/*
* Programmer: Arwa Feroze
* Date: 24/10/2023
* Desc: Swap two integers using SwapIntegers functions.
*/
#include <stdio.h>
void main(){
	int num1, num2;
	void SwapIntegers(int num1, int num2);
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	SwapIntegers(num1, num2);
}//end main

void SwapIntegers(int num1, int num2){
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("The first number is now: %d\n", num1);
	printf("The second number is now: %d", num2);
}//end SwapIntegers