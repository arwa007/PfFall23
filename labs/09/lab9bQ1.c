/*
* Programmer: Arwa Feroze
* Date:31/10/2023
* Description: Write a function for finding factorial of any integer N using recursion.
*/

#include <stdio.h>
int findFactorial(int n){
 
 //The base case
 if (n == 1){
 	return 1;
 }
 //Recursive case
 else {
 return n * findFactorial(n-1);
}
}

 int main(){
	int num;
	printf("Enter number N: ");
	scanf("%d", &num);
 printf("%d", findFactorial(num));
 return 0;
 }
