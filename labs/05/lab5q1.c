/*
 * Programmer: Arwa Feroze
 * Date: 18/9/23
 * Description: Check if input is a multiple of 3.
 * Related files:
 */
  //--Include Files--//
 //--Global Varriables--//#include <stdio.h>#include <stdio.h>
int main() {
int num=0;
printf("Enter number\n");
scanf("%d", &num);
if (num%3==0)
printf("This number is a multiple of 3");
else
    printf("This number is not a multiple of 3");
return 0;
} 
