/*
 * Programmer: Arwa Feroze
 * Date: 21/10/23
 * Description: Multiplying two 2x2 matrixes.
 * Related file:
 */
  //--Include Files--//
 //--Global Varriables--//
#include<stdio.h>
int main(){
	printf("Enter elements of your first 2x2 matrix: \n");
	int array1[2][2];
	int i, j;
	for(i=0; i<2; i++) {
		for(j=0;j<2;j++) {
			printf("Enter value for array1[%d][%d]:", i+1, j+1);
			scanf("%d", &array1[i][j]);
}//end for
}//end for
	printf("Enter elements of your second  2x2 matrix: \n");
	int array2[2][2];
	for(i=0; i<2; i++) {
		for(j=0;j<2;j++) {
			printf("Enter value for array2[%d][%d]:", i+1, j+1);
			scanf("%d", &array2[i][j]);
}//end for
}//end for
 
	int prod[2][2];
	
    prod[0][0] = array1[0][0]*array2[0][0] + array1[0][1]*array2[1][0];
    
    prod[0][1] = array1[0][0]*array2[0][1] + array1[0][1]*array2[1][1];
    
    prod[1][0] = array1[1][0]*array2[0][0] + array1[1][1]*array2[1][0];
    
    prod[1][1] = array1[1][0]*array2[0][1] + array1[1][1]*array2[1][1];
   
    
    
	printf("The Multiple of the two 2x2 arrays is:\n");
	for(i=0; i<2; i++) {
		for(j=0;j<2;j++) {
			printf("Element (%d, %d): %d  ", i+1, j+1, prod[i][j]);
		}//end for
		printf("\n");
	}//end for

return 0;
}//end main


