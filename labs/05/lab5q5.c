/*
 * Programmer: Arwa Feroze
 * Date: 25/9/23
 * Description: Check whether the input character is a small alphabet, capital alphabet, digit or special character, using if else.
 * Related files:
 */
  //--Include Files--//
 //--Global Varriables--//
#include <stdio.h>
int main (){
	char input;
	int i=0;
	printf("Enter a single character: ");
	scanf(" %c", &input);
	if(input >= 65 && input<= 90){
		printf("You have entered a Capital Letter.");
	}else if(input >= 97 && input<= 122){
		printf("You have entered a small letter.");
	}else if(input >= 48 && input<= 57){
		printf("You have entered a digit.");
	}else if(input >= 32 && input<= 47){
		printf("You have entered a special character.");
	}else if(input >= 58 && input<= 64){
		printf("You have entered a special character.");
	}else if(input >= 91 && input<= 96){
		printf("You have entered a special character.");
	}else if(input >= 123 && input<= 126){
		printf("You have entered a special character.");
	}else{
		printf("Uh Oh...something's wrong. Try Again.");
}//end if
}//end main