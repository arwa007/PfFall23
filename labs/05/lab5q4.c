/*
 * Programmer: Arwa Feroze
 * Date: 25/9/23
 * Description: Calculator using Switch Case.
 * Related files:
 */
  //--Include Files--//
 //--Global Varriables--//#include <stdio.h>
int main (){
float num1, num2, ans=0;
char op;
printf("Enter first number\n");
scanf("%f", &num1);
printf("Enter operator. Choose from +, -, *, and /.\n");
scanf(" %c", &op);
printf("Enter second number\n");
scanf("%f", &num2);
switch (op) {
	case '+':
	ans=num1+num2;
	printf("Your answer is: %f", ans);
	break;
	case '-':
	ans=num1-num2;
	printf("Your answer is: %f", ans);
	break;
	case '*':
	ans=num1*num2;
	printf("Your answer is: %f", ans);
	break;
	case '/':
	ans=num1/num2;
	printf("Your answer is: %f", ans);
	break;
	default:
printf("Oops..Try Again");
break;
}//end switch
return 0;
}//end main
