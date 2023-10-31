/*
* Programmer: Arwa Feroze
* Date: 31/10/2023
* Description: Commenting faults.
*/

#include <stdio.h>

void swap(int a, int b){ 
	int tmp = a;
	a = b;
	b = a;// a has the value of b, not original a. original a is stored in temp. 
 }

int main(){
	int j= 2, k = 5;
	printf("j=%d, k=%d\n",j,k);
	swap(j,k); //Moreover, j and k are passing by values, not references.

	printf("j=%d, k=%d\n",j,k ); 
	return 0;
}
