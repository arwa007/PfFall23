/*
 * Programmer: Arwa Feroze
 * Date: 3/10/23
 * Description: Print Fibonacci series up to 10000. Also find the sum of the
generated Fibonacci numbers divisible by 3, 5 or 7 only.
 */
  //--Include Files--//
 //--Global Varriables--//
#include <stdio.h>
int main(){
	int nextnum=0, prevnum = 1, count=1, temp=1, sum=0;
	for(nextnum=0; nextnum<10000;){
		temp= nextnum;
		nextnum = nextnum + prevnum;
		if(nextnum<10000){
			printf("%d, ", nextnum);
			if(nextnum%3 == 0 || nextnum%5 == 0 || nextnum%7 == 0){
			sum = sum + nextnum;
				}// end if				
					}//end if
		prevnum = temp;
}//end for
printf("\n The sum the numbers in the fibionacci sequence that are divisible by 3, 5 or 7 is: %d", sum);
}//end main