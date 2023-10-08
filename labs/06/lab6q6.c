 * Programmer: Arwa Feroze
 * Date: 8/10/23
 * Description: Printing a table for integers.
 * Related files:
 */
  //--Include Files--//
 //--Global Varriables--//
#include <stdio.h>
int main(){
	int n=21, comp_choice=0, pchoice;
	printf("Welcome to the match sticks game! \nYou have 21 matchsticks to choose from. You can only pick up 4, 3, 2, or 1 match stick at a time. Whoever has to pick up the last match stick loses.\n"); 
	printf("How many matchsticks do you want to pick up?\n");
	while (n!=1){
		printf("Remaining matchsticks: %d\n", n);
		printf("Your choice: ");
		scanf("%d", &pchoice);
		if(pchoice <= 0 || pchoice > 4){
		    printf("Uh Oh: You can only choose numbers between 4 and 1.\n");
		}else{
		printf("\n");
		n = n - pchoice;
		printf("Remaining matchsticks: %d\n", n);
		}//end if
		switch (n){
		case 20:
			printf("Computer choice: 4\n");
			n = n - 4;
			break;
		case 19:
			printf("Computer choice: 4\n");
			n = n - 4;
			break;
		case 18:
			printf("Computer choice: 3\n");
			n = n - 3;
			break;
		case 17:
			printf("Computer choice: 2\n");
			n = n - 2;
			break;
		case 16:
			printf("Computer choice: 1\n");
			n = n - 1;
			break;
		case 15:
			printf("Computer choice: 4\n");
			n = n - 4;
			break;
		case 14:
			printf("Computer choice: 3\n");
			n = n - 3;
			break;
		case 13:
			printf("Computer choice: 2\n");
			n = n - 2;
			break;
		case 12:
			printf("Computer choice: 1\n");
			n = n - 1;
			break;
		case 11:
			printf("Computer choice: 1\n");
			n = n - 1;
			break;
		case 10:
			printf("Computer choice: 4\n");
			n = n - 4;
			break;
		case 9:
			printf("Computer choice: 3\n");
			n = n - 3;
			break;
		case 8:
			printf("Computer choice: 2\n");
			n = n - 2;
			break;
		case 7:
			printf("Computer choice: 1\n");
			n = n - 1;
			break;
		case 5:
			printf("Computer choice: 4\n");
			n = n - 4;
			break;
		case 4:
			printf("Computer choice: 3\n");
			n = n - 3;
			break;
		case 3:
			printf("Computer choice: 2\n");
			n = n - 2;
			break;
		case 2:
			printf("Computer choice: 1\n");
			n = n - 1;
			break;
		default:
			
}//end switch case
}// end while
	printf("Only 1 match stick remains.\nComputer Wins!");
	return 0;
}//end main	