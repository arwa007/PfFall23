\\172.16.5.41\Exam Submission\Arwa Feroze
/*
 * Programmer: Arwa Feroze
 * Date: 11/9/23
 * Description: Ask the user to input how many numbers (n) he wants to square and sum. Then input n numbers, square them, sum them, and output the result.
 * Related files:
 */
  //--Include Files--//
 //--Global Varriables--//
#include<stdio.h>
main() {
       int n=0;
       int num=0;
       int ans=0;
       int i=0;
       printf("Enter a positive whole number \n");
       scanf("%d", &n);
       while (i<n){
              printf("Enter a positive whole number \n");
              scanf("%d", &num);
              num=num*num;
              ans=ans+num;
              i=i+1;
       }
       printf("%d", ans);
       }
