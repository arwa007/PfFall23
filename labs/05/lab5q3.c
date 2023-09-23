#include <stdio.h>
int main () {
	char choice;
	printf("Are you sure you want to delete this?\nIf yes, type Y.\nIf no, type N.\n"); 
	scanf("%c", &choice);

	switch (choice){
		case 'N':
		case 'n': 
			printf("Delete Cancelled.");	
			break;
		case 'Y':
		case 'y':
			printf("Deleted Successfully.");
			break;
		default:
			printf("Choose the right option.");
			}//end switch
			
	return 0;
}//end main