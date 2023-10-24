/*
* Programmer: Arwa Feroze
* Date: 24/10/2023
* Desc: Calculcator using functions.
*/
#include <stdio.h>

void addition(int num1, int num2){
	float ans = 0;
	ans=num1+num2;
	printf("Your answer is: %f", ans);
}//end addition 

void substraction(int num1, int num2){
	float ans = 0;
	ans=num1-num2;
	printf("Your answer is: %f", ans);
}//end substraction

void multiplication(int num1, int num2){
	float ans = 0;
	ans=num1*num2;
	printf("Your answer is: %f", ans);
}//end multiplication

void division(int num1, int num2){
	float ans = 0;
	ans=num1/num2;
	printf("Your answer is: %f", ans);
}//end division

int main (){
float num1, num2;
char op;
printf("Enter first number\n");
scanf("%f", &num1);
printf("Enter operator. Choose from +, -, *, and /.\n");
scanf(" %c", &op);
printf("Enter second number\n");
scanf("%f", &num2);
switch (op) {
	case '+':
	addition(num1, num2);
	break;
	case '-':
	substraction(num1, num2);
	break;
	case '*':
	multiplication(num1, num2);
	break;
	case '/':
	division(num1, num2);
	break;
	default:
printf("Oops..Try Again");
break;
}//end switch
return 0;
}//end main
