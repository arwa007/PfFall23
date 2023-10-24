/*
* Programmer: Arwa Feroze
* Date: 24/10/2023
* Desc: Check if a specific car be used on a particular day of the week.
*/
#include <stdio.h>
int decideCarUsage(int day, int carnum) {
	if (carnum%2 == 0 && day%2 == 0 || carnum%2 == 1 && day%2 == 1){
		return 1;
	}else{
		return 0;
}//end if
}

int main(){
	int day, carnum, canBeUsed;
	printf("Enter day 1-7: ");
	scanf("%d", &day);
	printf("Enter your car number: ");
	scanf("%d", &carnum);
	canBeUsed = decideCarUsage(day, carnum);
	if (canBeUsed == 1){
		printf("Your car can be used.");
	}else{
		printf("Your car cannot be used.");
	}//end if

}//end main