#include <stdio.h>
int main() {
int hours=0;
printf("Enter current hour in 24-hour format. Use 24 for 12 A.M.\n");
scanf("%d", &hours);
if(hours>=5 && hours<=11){
		printf("Good Morning!");
}else if(hours>11 && hours<=18){
		printf("Good Evening!");
}else if(hours>18 && hours<=24){
		printf("Good Night!");
}else{
	printf("Enter a valid number from 5 to 24."); 
}
return 0;
}//end main