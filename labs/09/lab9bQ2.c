/*
* Programmer: Arwa Feroze
* Date:31/10/2023
* Description: Write a function for mulltiplying two integers using recursion.
*/
#include <stdio.h>
int mul(int a, int b){
 
 //The base case
 if (b == 1){
 	return a;
 }
 //Recursive case
 else {
 return a + mul(a, b-1);
}
}

 int main(){
	int num1, num2;
	printf("Enter number number 1: ");
	scanf("%d", &num1);
	printf("Enter number number 2: ");
	scanf("%d", &num2);
 printf("%d", mul(num1, num2));
 return 0;
 }
