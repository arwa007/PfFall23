/* 
* Programmer: Arwa Feroze
* Date: 31/10/2023
* Description: Player statistics for all batsmen including total score, number of centuries and half centuries, and highscore using 2D array iterations.
*/

# include <stdio.h>
int main(){
	//Declare all variables
	int men, inns, cent, half_cent, avg, total, max, i,j; 
	
	//Input total number of men and number of innings.
	printf("Enter the total number of men: ");
	scanf("%d", &men);
	printf("Enter the total number of innings: ");
	scanf("%d", &inns);

	//Declare Array
	int perform[men][inns];

	//Input scores of each batsman in each inning.
	for(i=0; i<men; ++i){
		for(j=0; j<inns; ++j){
			printf("Enter the score of batsman #%d in inning #%d: ", i+1, j+1);
			scanf("%d", &perform[i][j]);
		}//end for
	}//end for
    
	//Calculate and display stats for each batsman
	for(i=0; i<men; i++){
		cent = 0;
		half_cent = 0;
		total = 0;
		max = 0;
		printf("\nBatsman #%d: \n", i+1);
		
		for(j=0; j<inns; j++){
		    
		    total = total + perform[i][j];
			
			if (perform[i][j] >= 100){
				cent++;
			}else if(perform[i][j] >= 50 && perform[i][j] < 100){ 
				half_cent++;
			}//end if

			if (perform[i][j] > max){
				max = perform[i][j];
			}//end if
			
		}//end for
		
		avg = total/inns;
		printf("Total Score: %d \nNo. of Centuries: %d \nNo. of Half Centuries: %d \nHighest Score in a Single Inning: %d \nAverage Runs per Inning: %d\n", total, cent, half_cent, max, avg);
		
	}//end for
	
	return 0;	
}//end main
