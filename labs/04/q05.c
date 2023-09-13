
\\172.16.5.41\Exam Submission\Arwa Feroze
/*
 * Programmer: Arwa Feroze
 * Date: 11/9/23
 * Description: Determine who's older after taking 2 people's DOB as inouts.
 * Related files:
 */
  //--Include Files--//
 //--Global Varriables--//
#include <stdio.h>
int main()
{
 int year1=0, year2=0, month1=0, month2=0, day1=0, day2=0;
 printf("Enter person 1's date of birth in the following order: year, month, day.\n");
 scanf("%d%d%d", &year1, &month1, &day1);
 printf("Enter person 2's date of birth in the following order: year, month, day.\n");
 scanf("%d%d%d", &year2, &month2, &day2);\
 if (year2-year1<0) {
 	printf("Person 2 is older.");
 }else{
        if (year2-year1>0){
            printf("Person 1 is older.");
                            }
 		   	}
 if (year2-year1 == 0){
     if (month2-month1<0) {
 	printf("Person 2 is older.");
 }else{
       if (year2-year1>0){
        printf("Person 1 is older.");
 		                    }
			}
                        }
if (year2-year1==0 && month2-month1==0){
	if (day2-day1<0) {
 	printf("Person 2 is older.");
 }else{ 
        if (day2-day1>0){
        printf("Person 1 is older.");
                        }
 }
	  if (year2-year1==0 && month2-month1==0 && day2-day1==0){
	printf("They are the same age.");
 		   }  
}
return 0;
}
   