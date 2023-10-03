/*
 * Programmer: Arwa Feroze
 * Date: 3/10/23
 * Description: Using Loops iterate the value of input a till the value of input b. If the value of a<=9 the output should correspond to the English representation of the numbers i.e., 8=Eight, 9=Nine etc.
		If the iteration exceeds 9 then the programs should print if the exceeded number is even or odd.
 * Related files:
 */
  //--Include Files--//
 //--Global Varriables--//
#include <stdio.h>
int main(){
    int num1, num2, count;
	printf("Enter two numbers. The first number should be smaller than the second.\n");
	scanf("%d%d", &num1, &num2);
		if (num1 >= num2){
	  printf("The first number should be smaller than the second.\n");  
	}else{
	switch(num1){
	case 1:
		printf("One \n");
		if (num2 == 1){
			break;
			}
	case 2:
		printf("Two \n");
		if (num2 == 2){
			break;
			}
 	case 3:
		printf("Three \n");
		if (num2 == 3){
			break;
			}
	case 4:
		printf("Four \n");
		if (num2 == 4){
			break;
			}
	case 5:
		printf("Five \n");
		if (num2 == 5){
			break;
			}
	case 6:
		printf("Six \n");
		if (num2 == 6){
			break;
			}
	case 7:
		printf("Seven \n");
		if (num2 == 7){
			break;
			}
	case 8:
		printf("Eight \n");
		if (num2 == 8){
			break;
			}
	case 9:
		printf("Nine \n");
		if (num2 == 9){
			break;
			}
		
	default:
		count = 10;
		num1 = 10;
		while(num1 <= num2){
		if(count%2 == 0){
		printf("Even\n");
	}else{
	printf("Odd\n");	
	}//end if
	count++;
	num1++;
	}//end while
}//end switch
}//end if
return 0;
}// end main