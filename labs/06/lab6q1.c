/*
 * Programmer: Arwa Feroze
 * Date: 3/10/23
 * Description: Check if input is a perect number.
 * Related files:
 */
  //--Include Files--//
 //--Global Varriables--//
#include <stdio.h>
int main(){
	int num=0, sum=0, count=2, div=0;
	printf("Enter a positive whole number.\n");
	scanf("%d", &num);
	while(count<=num){
		if(num%count == 0){
		    div = num/count;
			sum = sum + div;
			} //end if
		count++;
			} //end while
if(sum == num){
printf("It's a perfect number!");
}else{
printf("It's not a perfect number :(");
} //end if
return 0;
} //end main
