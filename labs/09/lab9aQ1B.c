/*
* Programmer: Arwa Feroze
* Date: 31/10/2023
* Description: Modify the function swap and its call at line 12 to get the desired result.
*/
#include <stdio.h>

void swap(int *a, int *b){ 
	int tmp = *a;
	*a = *b;
	*b = tmp;
 }

int main(){
	int j= 2, k = 5;
	printf("j=%d, k=%d\n",j,k);
	swap(&j,&k);
	printf("j=%d, k=%d\n",j,k ); 
	return 0;
}
