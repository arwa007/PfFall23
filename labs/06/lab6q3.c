/*
 * Programmer: Arwa Feroze
 * Date: 3/10/23
 * Description: Check if input is a perect number.
 * Related files:
 */
  //--Include Files--//
 //--Global Varriables--//
#include <stdio.h>
#include <stdbool.h>
int main(){
	int num1, num2, temp, lcm, count=2, temp2, gcd=1;
	bool flag = true;
	printf("Enter two numbers.\n");
	scanf("%d %d", &num1, &num2);
	if(num2<num1){
		temp = num1;
		num1 = num2;
		num2 = temp;
	}//end if
	if(num2%num1 == 0){
		lcm = num2;
		gcd = num1;
	}else{
		while(flag == true){
			temp2 = num2*count;
			if (temp2%num1 == 0){
				lcm = temp2;
				flag = false;
				}//end if
		count++;
			}//end while
}//end if
printf("The LCM is: %d\n", lcm);
count = 2;
while(count <= num2){
	count++;
	if (num2%count == 0 && num1%count == 0){
		gcd = count;
			}//end if
}// end if
printf("The GCD is: %d", gcd);
}//end main