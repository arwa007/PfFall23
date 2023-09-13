\\172.16.5.41\Exam Submission\Arwa Feroze
/*
 * Programmer: Arwa Feroze
 * Date: 11/9/23
 * Description: Print hollow diamond usinhg n as an input to determine its size.
 * Related files:
 */
  //--Include Files--//
 //--Global Varriables--//
#include <stdio.h>
int main()
{

	int n = 0, rows = 1, columns;
	printf("Enter a whole number.\n");
    scanf("%d", &n);
	while (rows <= n) {
		columns = n;
		while (columns > rows) {
			printf(" ");
			columns--;
		}
		printf("*");
		columns = 1;
		while (columns < (rows - 1) * 2) {
			printf(" ");
			columns++;
		}
		if (rows == 1) {
			printf("\n");
		}
		else {
			printf("*\n");
		}
		rows++;
	}
	rows = n - 1;
	while (rows >= 1) {
		columns = n;
		while (columns > rows) {
			printf(" ");
			columns--;
		}
		printf("*");
		columns = 1;
		while (columns < (rows - 1) * 2) {
			printf(" ");
			columns++;
		}
		if (rows == 1) {
			printf("\n");
		}
		else {
			printf("*\n");
		}
		rows--;
	}
	return 0;
}
