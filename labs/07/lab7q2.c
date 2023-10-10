 * Programmer: Arwa Feroze
 * Date: 10/10/23
 * Description: Rotate the array elements to the left by 'd' positions.
 * Related file:
 */
  //--Include Files--//
 //--Global Varriables--//
#include <stdio.h>
int main(){
	int n, d, temp,k, i=0;
	printf("Enter the size of your 1D array.\n");
	scanf("%d", &n);
	int arr[n];
	for (i=0; i < n; i++){
		printf("Enter Element: ");
		scanf("%d", &arr[i]);
}//end for
	printf("By how many poisitions do you want to shift your array to the left?\n");
	scanf("%d", &d);
	for(i=0; i<d; i++){
    	temp = arr[0];
        for (k = 0; k<n-1; k++){
            arr[k] = arr[k+1];
        }// end for
        arr[n-1] = temp;
}//end for
	for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }//end for
 	return 0;
}//end main