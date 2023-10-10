 * Programmer: Arwa Feroze
 * Date: 10/10/23
 * Description: Check if input array is symmetric or not.
 * Related file:
 */
  //--Include Files--//
 //--Global Varriables--//
#include<stdio.h>
int main(){
	int m1, n1, m2, n2;
	printf("How many rows do you want in your first array?");
	scanf("%d", &m1);
	printf("How many columns do you want in your first array?");
	scanf("%d", &n1);
	int array1[m1][n1];
	int i, j;
	for(i=0; i<m1; i++) {
		for(j=0;j<n1;j++) {
			printf("Enter value for array1[%d][%d]:", i, j);
			scanf("%d", &array1[i][j]);
}//end for
}//end for
	printf("How many rows do you want in your second array?");
	scanf("%d", &m2);
	printf("How many columns do you want in your second array?");
	scanf("%d", &n2);
	int array2[m2][n2];
	for(i=0; i<m2; i++) {
		for(j=0;j<n2;j++) {
			printf("Enter value for array2[%d][%d]:", i, j);
			scanf("%d", &array2[i][j]);
}//end for
}//end for
	printf("The Multiple of the Two is:\n");
	for(i=0; i<m2; i++) {
		for(j=0;j<n1;j++) {
			printf("%d", prod[i][j]);
}//end for
		printf("\n");
}//end for
    if	???
}else{
	printf("Matrix multiplication not possible.");
}//end if
return 0;
}//end main