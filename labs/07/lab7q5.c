/*
 * Programmer: Arwa Feroze
 * Date: 20/10/23
 * Description: Printing a man with a top hat.
 */
# include <stdio.h>
int main(){
	int n;
	printf("How big do you want the man to be? Enter a positive whole number: ");
	scanf("%d", &n);
	PrintHat(n);
	PrintEyes(n);
	PrintNose(n);
	PrintMouth(n);
	PrintUpperBody(n);
	PrintLowerBody(n);
	PrintBoots(n);
return 0;
}//end main

void PrintHat(int n){
	for (int j=0; j<n-2; j++){
		for(int k=0; k<n/2; k++)
		printf(" ");
		for(int i=0; i<n; i++)
		printf("*");
	printf("\n");
	}//end for
	for (int j=0; j<2*n; j++)
		printf("*");
		printf("\n");
}//end printHat

void PrintEyes(int n){
	for (int i=0; i<n/2; i++)
		printf(" ");
	printf("*");
	for (int i=0; i<n-2; i++)
		printf(" ");
	printf("*");
	printf("\n");
}//end PrintEyes

void PrintNose(int n){
	if (n<=5){
		for(int k=0; k<n-1; k++)
		printf(" ");
	printf("|\n");
	}else if(n>5){
		for (int i=0; i<2; i++){ 
			for(int k=0; k<n; k++)
				printf(" ");
			printf("|\n");
		}//end for
	}//End If
}//end PrintNose

void PrintMouth(int n){
    for (int i=0; i<n-n/(n-3); i++)
        printf(" ");
	printf("\\_/");
	printf("\n");
}//end PrintMouth
 
void PrintUpperBody(int n){
	for (int i=0; i<(2*n) - (n/6); i++)
		printf("*");
	printf("\n");
	for (int j=0; j<n-1; j++){
		for(int k=0; k<n/2 - n/6; k++)
			printf("*");
		for(int k=0; k<n/2 -1; k++)
			printf(" ");
		for(int k=0; k<n-(n/2-1); k++)
			printf ("*");
		for(int k=0; k<n/2 -1; k++)
			printf(" ");
		for(int k=0; k<n/2 - n/6; k++)
			printf("*");
	printf("\n");
}//end for
}//end PrintUpperBody

void PrintLowerBody(int n){
	for(int i= 0; i < (n/2 - n/6)+(n/2 -1); i++)
		printf(" ");
	for(int j=0; j < n-(n/2-1); j++)
		printf("*");
	printf("\n");
	for (int k=0; k<n; k++){
		for (int l = 0; l < ((n/2 - n/6)+(n/2 -1))/(n/5); l++)
			printf(" ");
		for (int m=0; m<n/2 - n/6; m++)
			printf("*");
		for (int o=0; o< (n/2 - n/6)/2; o++)
			printf(" ");
		for (int m=0; m<n/2 - n/6; m++)
			printf("*");
			printf("\n");
}//end for
}//end PrintLowerBody

void PrintBoots(int n){
	for(int k=0; k<2; k++){
		for (int i=0; i < (n/2 - n/6)/2; i++)
			printf(" ");
		for (int j=0; j<n-n/5; j++)
			printf("*");
	}//end for	
}//end PrintBoots